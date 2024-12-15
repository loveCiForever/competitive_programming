public class Solution1 {
    public int[] twoSum(int[] nums, int target) {
        int[] res = new int[2];
        for(int i = 0; i < nums.length; i++) {
            for(int j = i + 1; j < nums.length; j++) {
                if(nums[i] + nums[j] == target) {
                    res[0] = i;
                    res[1] = j;
                    
                    if(res[0] > res[1]) {
                        int tmp = res[1];
                        res[1] = res[0];
                        res[0] = tmp;
                    }
                    
                    return res;
                }
            }
        }

        return null;
    }
}