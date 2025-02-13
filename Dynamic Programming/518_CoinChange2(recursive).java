class Solution {
    public int change(int amount, int[] coins) {
      return countWays(coins, coins.length-1,amount); 
    }
    public int countWays(int []coins,int i,int amount){
     if(amount==0)
      return 1;
      if(amount<0)
      return 0;
      if(i<0)
      return 0;
      return countWays(coins,i-1,amount)+countWays(coins,i,amount-coins[i]); 
    }
}