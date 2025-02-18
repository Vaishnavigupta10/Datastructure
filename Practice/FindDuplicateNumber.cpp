// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and using only constant extra space.

 

// Example 1:

// Input: nums = [1,3,4,2,2]
// Output: 2

#include<unordered_set>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
  public:
int main(){
  vector<int> nums;
  int n=nums.size();
  for(int i=0;i<n;i++){
  cin>>nums[i];
}
Solution sol;
 cout<<sol.findDuplicate(nums);
}

      int findDuplicate(vector<int>& nums) {
          unordered_set<int> s;
          for (int num : nums) {
              if (s.find(num) != s.end()) {
                  return num;
              }
              s.insert(num);
          }
          return -1;  
      }
  };

  