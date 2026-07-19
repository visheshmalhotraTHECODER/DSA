class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int>jhola;

        for(int i = 0; i<nums.size(); i++){
            jhola[nums[i]]++;

        }
        priority_queue<pair<int,int>>pq;

        for(auto item : jhola){
            pq.push({item.second,item.first});
        }
        vector<int>ans;

        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;


        
    }
};