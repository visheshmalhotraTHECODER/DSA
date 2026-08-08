class Solution {
public:

vector<vector<int>> ans;
vector<int>temp;

void solve(vector<int>& candidates, int index, int target){

    if(target == 0){

        ans.push_back(temp);
        return;
    }
    if(target < 0){
        return ;
    }
    for(int i = index; i<candidates.size(); i++){

        temp.push_back(candidates[i]);
        
        solve(candidates,i,target-candidates[i] );

        temp.pop_back();
        

    }

}


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(candidates, 0, target);
        return ans;
        
    }
};