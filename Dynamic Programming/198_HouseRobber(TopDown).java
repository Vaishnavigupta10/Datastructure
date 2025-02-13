class Solution{
    public int rob(int[] nums){
        int[]dp=new int[nums.length];
        Arrays.fill(dp,-1);
        return helper(nums,0,dp);

    }
    public int helper(int []nums,int ind,int[] dp){
        if(ind>=nums.length){
            return 0;
        }
        if(dp[ind]!=-1)
        return dp[ind];

        int rc=helper(nums,ind+2,dp)+nums[ind];
        int sc=helper(nums,ind+1,dp);

        dp[ind]=Math.max(rc,sc);
        return dp[ind];
    }
}