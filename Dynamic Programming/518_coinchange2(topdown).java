import java.util.Arrays;
class Solution{
    public int change(int amount,int[]coins){
    int[][]ans=new int[coins.length][amount+1];
    for (int[] row : ans) {
            Arrays.fill(row, -1); 
        }
        return numWay(coins.length - 1, amount, coins, ans);
}
    public int numWay(int i,int amount,int[] coins,int[][]ans){
        if(amount==0)
      return 1;
      if(amount<0)
      return 0;
      if(i<0)
      return 0; 
      if(ans[i][amount]!=-1)
      return ans[i][amount];

      ans[i][amount]= numWay(i-1,amount,coins,ans)+numWay(i,amount-coins[i],coins,ans); 
      return ans[i][amount];
    }
}