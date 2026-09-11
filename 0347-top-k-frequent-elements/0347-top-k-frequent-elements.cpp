class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int,int>jhola;

        for(int num:nums){
            jhola[num]++;
        }
        priority_queue<pair<int,int>>pq;

        for(auto item: jhola){
            pq.push({item.second,item.first});
        }
        vector<int>ans;

        while(k>0){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
        
    }
};