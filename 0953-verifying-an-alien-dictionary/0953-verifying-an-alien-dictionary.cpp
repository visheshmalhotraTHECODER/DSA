class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        

        for(int i = 0;i<words.size()-1; i++){
            string first = words[i];
            string second = words[i+1];

            int j = 0;

            while(j<first.size() && j<second.size()){

                if(first[j]!=second[j]){

                    int pos1 = order.find(first[j]);
                    int pos2 = order.find(second[j]);

                    if(pos1>pos2){
                        return false;
                    }
                    break;


                }
                j++;



            }
            if(j == second.size() &&first.size()>second.size()){
                return false;
            }

            
        }
        return true;
        
    }
};