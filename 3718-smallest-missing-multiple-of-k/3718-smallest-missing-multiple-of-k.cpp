class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>jhola;

        for(int x : nums){

            jhola.insert(x);

        }

        int missing = k;

        while(jhola.find(missing)!=jhola.end()){
            missing+=k;
        }
        return missing;
    }
};