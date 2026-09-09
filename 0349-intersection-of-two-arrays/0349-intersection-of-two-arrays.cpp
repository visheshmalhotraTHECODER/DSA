class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>jhola;
        for(int num:nums1){
            jhola.insert(num);
        }

        vector<int>ans;

        for(int num:nums2){

            if(jhola.find(num)!=jhola.end()){
                ans.push_back(num);
                jhola.erase(num);
            }

        }
        return ans;
        
    }
};