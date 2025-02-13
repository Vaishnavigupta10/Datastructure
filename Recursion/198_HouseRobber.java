class Solution {
    public int rob(int[] nums) {
        return helper(nums,0);
    }
    public int helper(int []nums,int ind){
        if(ind>=nums.length){
            return 0;
        }
        int rc=helper(nums,ind+2)+nums[ind];
        int sc=helper(nums,ind+1);
        
        return Math.max(rc,sc);
    }
}

