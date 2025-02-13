class Solution{
  public int findTargetSumWays(int[] nums,int target){
      HashMap<String,Integer> memo=new HashMap<>();
      return helper(nums,target,0,0,memo);
          }
      public int helper(int[]nums,int target,int ind,int currsum,HashMap<String,Integer>memo){
          if(ind==nums.length){
              return (currsum==target)?1:0;
          }
          String key=ind+","+currsum;
          if(memo.containsKey(key)){
              return memo.get(key);
          }
          int add=helper(nums,target,ind+1,currsum+nums[ind],memo);
          int sub=helper(nums,target,ind+1,currsum-nums[ind],memo);
          memo.put(key,add+sub);
          return add+sub;
      }
}
