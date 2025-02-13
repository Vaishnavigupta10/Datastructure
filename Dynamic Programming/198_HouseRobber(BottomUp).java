class Solution {
    public int rob(int[]nums){
        int n=nums.length;
        if(n==0)
        return 0;
        if(n==1)
        return nums[0];
        int []ans=new int [n];
        ans[0]=nums[0];
        ans[1]=Math.max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            ans[i]=Math.max(nums[i]+ans[i-2],ans[i-1]);
        }
        return ans[n-1];
    }
}