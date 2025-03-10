// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int n=s.length();

//         int length=0,maxlength=0;
//        for(int i=0;i<n;i++){
//        int hash[256]={0};
//         for(int j=i;j<n;j++){
//             if(hash[s[j]]==1)
//                 break;
//             length=j-i+1;
//             maxlength=max(maxlength,length);
//             hash[s[j]]=1;
//         }
//        } 
//        return maxlength;
//     }
// };

class Solution{
  public:
  int lengthOfLongestSubstring(string s){
      int hash[256];
      fill_n(hash,256,-1);
      int l=0,r=0,length=0,maxLength=0;
      int n=s.length();
      while(r<n){
          if(hash[s[r]]!=-1){
              if(hash[s[r]]>=l){
                  l=hash[s[r]]+1;
              }
          }
          length=r-l+1;
          maxLength=max(maxLength,length);
          hash[s[r]]=r;
          r++;
      }
      return maxLength;
  }
};