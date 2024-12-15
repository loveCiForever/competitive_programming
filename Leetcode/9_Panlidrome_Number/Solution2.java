import java.util.Stack;

class Solution2 {
    public static boolean isPalindrome(int x) {
        if(x > 0) {
            if(countDigit(x) > 1) {
                Stack<Integer> newStack = new Stack<>();
                if(countDigit(x) %2 == 0) {
                    for(int i = 0; i < countDigit(x); i++) {
                        newStack.push(x%10);
                        x /= 10;
                    }
                    while(!newStack.isEmpty()) {
                        if(x%10 != newStack.pop()) {
                            return false;
                        }
                        x /= 10;
                    }
                    return true;
                } else if(countDigit(x) %2 != 0) {
                    for(int i = 0; i < countDigit(x) - 1; i++) {
                        newStack.push(x%10);
                        x /= 10;
                    }
                    x /= 10;
                    while(!newStack.isEmpty()) {
                        if(x%10 != newStack.pop()) {
                            return false;
                        }
                        x /= 10;
                    }
                    return true;
                }
            } else {
                return true;
            }
        } else if(x == 0) {
            return true;
        }
        
        return false;
    }


    public static int countDigit(int n) {
        return (int)Math.floor(Math.log10(n) + 1);
    }

    public static void main(String[] args) {
        int x = 1001;
        System.out.println(x);
        System.out.println(isPalindrome(x) ? "YES" : "NO");


        Stack<Integer> newStack = new Stack<>();

        for(int i = 0; i < countDigit(x); i++) {
            newStack.push(x%10);
            x /= 10;
        }
        System.out.println(x);
        while(!newStack.isEmpty()) {
            System.out.print(newStack.pop());
        }


    }
}