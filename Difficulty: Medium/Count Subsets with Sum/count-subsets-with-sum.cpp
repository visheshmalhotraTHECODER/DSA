class Solution {
  public:
  
    int solve(vector<int>& arr ,int target, int n , vector<vector<int>>&t){
        
        
        if(n==0)
            return target == 0;
        
       
        if(t[n][target]!=-1)
            return t[n][target];
        
        if(arr[n-1]<=target){
          return t[n][target] = solve(arr, target-arr[n-1], n-1, t)+solve(arr, target, n-1, t);
        }
        
            return t[n][target] = solve(arr, target, n-1, t);
        

        
    }

    int perfectSum(vector<int>& arr, int target) {
        
        int n = arr.size();
        
        vector<vector<int>>t(n+1,vector<int>(target+1,-1));
        
        
        return solve(arr, target, n, t);
    }
};