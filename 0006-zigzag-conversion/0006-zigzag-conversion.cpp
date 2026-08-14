class Solution {
public:
    string convert(string s, int numRows) {

        if(numRows == 1 || numRows >= s.size()){
            return s;
        }
        vector<string> rows(numRows);
        
        int current = 0;

        bool goingdown = true;

        for(char ch:s){

            rows[current]+=ch;

            if(current == numRows-1){
                goingdown = false;


            }
            else if(current  == 0){
                goingdown = true;
            }
            if(goingdown){
                current++;
            }
            else{
            current--;
            }
        }
        string ans ="";

        for(string row:rows){
            ans+=row;
        }
        return ans;
        

    }
};