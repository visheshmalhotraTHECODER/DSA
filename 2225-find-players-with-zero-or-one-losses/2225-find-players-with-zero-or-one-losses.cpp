class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int>lost_map;
        int n = matches.size();

        for(int i = 0; i<n; i++){
            int lost =  matches[i][1];
            lost_map[lost]++;
        }
        vector<int>always_win;
        vector<int>loss_once;

        for(int i = 0; i<n; i++){
            int winner = matches[i][0];
            int looser = matches[i][1];
            if(lost_map.find(winner)==lost_map.end()){
                always_win.push_back(winner);
                lost_map[winner]= 2;
            }
            if(lost_map[looser]==1){
                loss_once.push_back(looser);
            }

        }
        sort(begin(loss_once), end(loss_once));
        sort(begin(always_win), end(always_win));

        return {always_win,loss_once};
    }
};