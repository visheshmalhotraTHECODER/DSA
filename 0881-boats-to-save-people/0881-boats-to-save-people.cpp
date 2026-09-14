class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();

        sort(people.begin(),people.end());

        int i = 0;
        int j = n-1;

        int boat = 0;

        while(i<=j){
            if(people[j]+people[i]<=limit){
                
                i++;
                j--;

            }
            else {
                
                j--;
            }
            boat+=1;
        }
        return boat;
        
    }
};