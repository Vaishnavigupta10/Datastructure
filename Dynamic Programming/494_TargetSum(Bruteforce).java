class Solution {
    public int findTargetSumWays(int[] nums, int target) {
        return helper(nums,target,0,0);
    }
    public int helper(int []nums,int target,int ind,int current){
        if(ind==nums.length){
            return (current==target)?1:0;
        }
        int add=helper(nums,target,ind+1,current+nums[ind]);
        int sub=helper(nums,target,ind+1,current-nums[ind]);

        return add+sub;
    }
}