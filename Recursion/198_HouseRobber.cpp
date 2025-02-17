#include<iostream>
#include<vector>
#include<algorithm>
using namespace  std;
int helper(vector<int>nums,int index){
    if(index>=nums.size()){
        return 0;
    }
    int rc=helper(nums,index+2)+nums[index];
    int sc=helper(nums,index+1);

    return max(rc,sc);
}
int main(){
    vector<int>nums={5,6,9,7,1,34};
    cout<< helper(nums,0)<<endl;
}
