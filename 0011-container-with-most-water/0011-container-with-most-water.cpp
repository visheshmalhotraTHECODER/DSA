class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int maxArea = 0; 

        int left = 0;
        int right = n-1;

        while(left<=right){
            int width = right-left;

            int area = width* min(height[left],height[right]);

            maxArea = max(maxArea, area);

            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
        
    }
};