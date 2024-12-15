import java.util.ArrayDeque;
import java.util.Deque;

public class Solution1 {
    public static String simplifyPath(String path) {
        Deque<String> newStack = new ArrayDeque<>();

        String[] pathArray = path.split("/" );

        for(String s : pathArray) {
            if(s.isEmpty() || s.equals(".")) {
                continue;
            }

            if(s.equals("..")) {
                if(!newStack.isEmpty()) {
                    newStack.pollLast();
                }
            } else {
                newStack.offerLast(s);
            }
        }

        return "/" + String.join("/", newStack);
    }

    public static void main(String[] args) {
        String path = "/.../a/../b/c/../d/./";
        System.out.println(simplifyPath(path));
       
    }
}
