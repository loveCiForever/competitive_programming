

class Solution2 {
    public static boolean isPalindrome(int x) {
        if (x > 0) {
            int original = x;
            int reverseNumber = 0;

            while (original > 0) {
                reverseNumber = reverseNumber*10 + original%10;
                original /= 10;
            }
            return reverseNumber == x;
        }
        
        return false;  
    }

    public static int countDigit(int n) {
        return (int)Math.floor(Math.log10(n) + 1);
    }

    public static void main(String[] args) {
        int x = 0;

        System.out.println(isPalindrome(x) ? "YES" : "NO");
    }
}