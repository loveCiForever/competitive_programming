public class Solution2 {
    public static String simplifyPath(String path) {
        String[] paths = new String[path.length()];
        int top = -1, i = 0, len = path.length();

        while(i < len) {
            while(i < len && path.charAt(i) == '/') ++i; // Count number of /
            int e = i;
            while(e < len && path.charAt(e) == '.') ++e; // Count number of . and /

            if(e > i && ((e == len && e - i == 1) || (e < len && e - i == 1 && path.charAt(e) == '/'))) {
                i = e;
                continue;
            }

            if(e > i && ((e == len && e - i == 2) || (e < len && e - i == 2 && path.charAt(e) == '/'))) {
                if(top != -1) --top;
                i = e;
                continue;
            }

            if(i == len) break;
            int s = i;
            while(i < len && path.charAt(i) != '/') ++i;
            paths[++top] = path.substring(s, i);
        }

        StringBuilder sb = new StringBuilder();
        for(i = 0;  i <= top; ++i) {
            sb.append("/");
            sb.append(paths[i]);
        }

        if(sb.length() == 0) sb.append("/");
        return sb.toString();
    }

    public static void main(String[] args) {
        String path = "/.../a/../b/c/../d/./";
        System.out.println(simplifyPath(path));
    }
}
