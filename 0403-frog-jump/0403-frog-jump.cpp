class Solution {
public:
    int n ;
    unordered_map<int, int>jhola;
    int t[2001][2001];

    int solve(vector<int>& stones , int cuurent_stone_index, int prevJump){

        if(cuurent_stone_index == n-1){
            return true;
        }
        if(t[cuurent_stone_index][prevJump]!=-1){
            return t[cuurent_stone_index][prevJump];
        }

        bool result = false;

        for(int next_Jump = prevJump-1; next_Jump <= prevJump+1; next_Jump++){

            if(next_Jump>0){

                int next_Stone = stones[cuurent_stone_index]+ next_Jump;

                if(jhola.find(next_Stone)!=jhola.end()){
                    result = result || solve(stones, jhola[next_Stone],next_Jump );
                }
            }
        }
        return  t[cuurent_stone_index][prevJump]=result;
        
    }

    bool canCross(vector<int>& stones) {
        n = stones.size();

        if(stones[1]!=1){
            return false;
        }
        for(int i = 0; i<n ; i++){
            jhola[stones[i]]=i;
        }
        memset(t,-1,sizeof(t));

        return solve(stones, 0, 0);

         
        
        
    }
};