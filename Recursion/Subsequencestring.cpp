#include<iostream>
#include<vector>
using namespace std;
void findSubsequence(string input,string output,int index,vector<string>& ans){
int n=input.length();
//base case

if(index>=n){
  ans.push_back(output);
  return;
}
//include

char ch=input[index];
output.push_back(ch);
findSubsequence(input,output,index+1,ans);
// exclude

output.pop_back();
findSubsequence(input,output,index+1,ans);

}
int main(){
  string input="abc";
  string output="";
  int index=0;
  vector<string>ans;
  findSubsequence(input,output,index,ans);
  for(string s:ans){
    cout<<"->"<<s<<endl;
  }

}