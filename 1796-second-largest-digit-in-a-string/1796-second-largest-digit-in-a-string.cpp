class Solution {
public:
    int secondHighest(string s) {
        int largest = -1;
        int secondlargest =-1;

        for(char ch:s){
            if(isdigit(ch)){
                int digit = ch-'0';

                if(digit>largest){
                    secondlargest = largest;
                    largest = digit;
                }
                else if(digit>secondlargest && digit<largest){
                    secondlargest = digit;
                }

            }
        }
        return secondlargest;
    }
};