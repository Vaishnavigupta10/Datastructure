#include<iostream>

using namespace std;
int maximizetheCuts(int n,int x,int y,int z){
  if(n==0)
  return 0;
  if(n<0)
  return INT8_MIN;

  int option1=1+maximizetheCuts(n-x,x,y,z);
  int option2=1+maximizetheCuts(n-y,x,y,z);
  int option3=1+maximizetheCuts(n-z,x,y,z);

  int finalAns=max(option1,(max(option2,option3)));

  return finalAns;
}
int main(){
  int n,x,y,z;
  cin>>n;
 cin>>x>>y>>z;

 cout<<maximizetheCuts(n,x,y,z);
}