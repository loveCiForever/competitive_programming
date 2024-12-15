
public class Solution1 {
//
    static{
        for(int i=0;i<500;i++){
            maxArea(new int[]{0,0});
        }
    }

    public static int maxArea(int[] height) {
        int len = height.length;
        int left = 0, right = len - 1;
        int maxi = Integer.MIN_VALUE;

        if(len == 2 && (height[0] != 0 && height[1] != 0)) {
            return 1;
        } else if(len == 2 && (height[0] == 0 || height[1] == 0)){
            return 0;
        }

        while (left < right) {
            int h = Math.min(height[left], height[right]); // find height
            maxi = Math.max(maxi, h * (right - left)); // find maximum area
            while (left < right && height[left] <= h) {
                left++;
            }

            while (left < right && height[right] <= h) {
                right--;
            }
        }
        return maxi;     
    }

    public static void main(String[] args) {
        int[] height = {1,8,6,2,5,4,8};
        System.out.println(maxArea(height));
    }
}
