#include<iostream>
using namespace std;

bool elemSore(int arr[],int size,int index){
  if(index==size)
  return true;

  if(arr[index]>=arr[index-1]){
  return elemSore(arr,size,index+1);
  }else{
    return false;
  }
}
int main(){
  int arr[]={10,70,30,40,70};
  int size=sizeof(arr) / sizeof(arr[0]);

  bool isSorted= elemSore(arr,size,1);

  if(isSorted){
    cout<<"Array is sorted";
  }else{
    cout<<"Array is not sorted";
  }
return 0;
}