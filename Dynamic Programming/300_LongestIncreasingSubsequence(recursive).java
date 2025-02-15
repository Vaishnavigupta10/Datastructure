class Solution {
  public int lengthOfLIS(int[] nums) {
     return solve(nums,0,-1); 
  }
  public int solve(int[]nums,int i,int p){
      if(i>=nums.length)
      return 0;
      int take=0;
      int skip=0;
  
      if(p==-1||nums[i]>nums[p]){
          take=1+solve(nums,i+1,i);
      }
      skip=solve(nums,i+1,p);
      return Math.max(take,skip);
  }
}