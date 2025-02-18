#include<iostream>
using namespace std;
void findSubsequence(string input,string output,int index){
int n=input.length();
//base case

if(index>=n){
  cout<<output<<endl;
  return;
}
//include

char ch=input[index];
output.push_back(ch);
findSubsequence(input,output,index+1);
// exclude

output.pop_back();
findSubsequence(input,output,index+1);

}
int main(){
  string input="abc";
  string output="";
  int index=0;
  findSubsequence(input,output,index);
  
}