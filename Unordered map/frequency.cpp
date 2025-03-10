#include<iostream>
#include<unordered_map>
using  namespace std;
bool checkCir(Node *head){
  unordered_map<node*,bool> vis;
  Node*temp=head;
  while(temp!=NULL){
    if(vis.find(temp)!=vis.end()){
      vis[temp]=true;
    }else{
      return true;
    }
    temp=temp->next;
  }
  return false;
}
int main(){
  string str;
  cin>>str;
  unordered_map<char,int> m;
   

  for(int i=0;i<str.length();i++){
    char ch=str[i];
    m[ch]++;
  }
  for(auto i:m){
    cout<<i.first<<"->"<<i.second<<endl;
  }
  return 0;
}