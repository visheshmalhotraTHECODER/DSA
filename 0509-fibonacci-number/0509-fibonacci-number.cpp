class Solution {
public:
    unordered_map<int,int>jhola;

    int fib(int n) {
        
        if(n<=1){
            return n;
        }
        if(jhola.find(n)!=jhola.end()){
            return jhola[n];
        }
        int result = fib(n-1)+fib(n-2);

        jhola[n] = result;

        return result;
    }
};