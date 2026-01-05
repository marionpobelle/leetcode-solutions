class Solution {
public:
    int maxArea(vector<int>& height) {
        int highestWater = 0;
        int currentWater = 0;
        int left = 0;
        int right = height.size() - 1;
        while(left != right)
        {
            currentWater = std::min(height[left], height[right]) * (right - left); 
            if(currentWater > highestWater)
            {
                highestWater = currentWater;
            } 
            if(height[left] >= height[right])
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return highestWater;
    }
};