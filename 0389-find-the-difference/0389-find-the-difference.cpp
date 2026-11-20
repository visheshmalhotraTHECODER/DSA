class Solution {
public:
    char findTheDifference(string s, string t) {
        int s_sum = 0;

        for(char &ch : s){
            s_sum+= ch;
        }
        int t_sum = 0;
        for(char &ch : t){
            t_sum+= ch;
        }
        return (char)(t_sum-s_sum);
        
    }
};