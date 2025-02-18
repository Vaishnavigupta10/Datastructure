#include<iostream>
#include<vector>
#include <climits>
using namespace std;
  int solve(vector<int>& coins,int amount){
      int n=coins.size();
      int ans=INT_MAX;
      int mini=INT_MAX;
      // base case
      if(amount==0)
      return 0;
      for(int i=0;i<n;i++){
          int coin=coins[i];
         if(amount>=coin){
          int recAns=solve(coins,amount-coin);
          if(recAns!=INT_MAX){
              ans=1+recAns;
          }
         }
         mini=min(mini,ans);
      }
      return mini;
  }
      int coinChange(vector<int>& coins, int amount) {
          int ans=solve(coins,amount);
          if(ans==INT_MAX)
          return -1;
          else
          return ans;
      }
  int main(){
    int m;
    vector<int>coins;
    cout<<"enter coins";
    for(int i=0;i<coins.size();i++){
      cin>>coins[i];
    cout<<"enter coins";
  }
    cout<<"ENTER AMOUNT";
  cin>>m;
  cout<<coinChange(coins,m);
  }