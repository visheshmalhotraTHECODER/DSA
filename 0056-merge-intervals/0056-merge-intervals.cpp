class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int  n = intervals.size();

        sort(intervals.begin(),intervals.end());

        vector<vector<int>>ans;

        ans.push_back(intervals[0]);

        for(int  i = 1; i<n; i++){
            int currentStart = intervals[i][0];
            int currentEnd = intervals[i][1];

            int prevEnd = ans.back()[1];

            if(currentStart<=prevEnd){
                ans.back()[1]= max(prevEnd, currentEnd);
            }
            else{
                ans.push_back(intervals[i]);
            }
        }
        return ans;
        
    }
};