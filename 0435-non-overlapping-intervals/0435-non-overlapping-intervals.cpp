class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();

        sort(intervals.begin(),intervals.end());

        int i = 0;
        int j = 1;
        int count  = 0;

        while(j<n){
            vector<int>cuurent_intervals = intervals[i];
            vector<int>next_intervals= intervals[j];

            int cs = cuurent_intervals[0];
            int ce = cuurent_intervals[1];

            int ns = next_intervals[0];
            int ne = next_intervals[1];

            if(ce <= ns){
                i = j;
                j++;
            }
            else if(ce<=ne){
                j++;
                count++;
            }
            else if(ce>ne){
                i=j;
                j++;
                count++;
            }
        }  
        return count;  

        
    }
};