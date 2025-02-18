#include<iostream>
using namespace std;
int binarySearch(int arr[],int start,int end,int target){
  while(start<end){
    int mid=start+(end-start)/2;

    if(arr[mid]==target)
    return mid;
    if(arr[mid]<target)
      return binarySearch(arr,mid+1,end,target);
      else
      return binarySearch(arr,start,mid-1,target);
  } return -1;
}
    
int main(){
  int arr[]={10,20,32,40,50,96};
  int target=50;
  int start=0;
  int n=sizeof(arr)/sizeof(arr[0]);
  int end=n-1;
   cout<<binarySearch(arr,start,end,target)<<endl;
}

