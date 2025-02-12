class Solution {
    public int countUniquePaths(int i,int j,int m ,int n){
        if(i==m-1||j==n-1){
            return 1;
        }
        if(i>=m || j>=n){
        return 0;
        }
        else{
        return countUniquePaths(i+1,j,m,n)+countUniquePaths(i,j+1,m,n);
}
    }
    public int uniquePaths(int m, int n) {
        
       return countUniquePaths(0,0,m,n); 
    }
}