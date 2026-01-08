class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int closestSum = 1 << 30;
        for (int i = 0; i < nums.size(); ++i) 
        {
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right) 
            {
                int currentSum = nums[i] + nums[left] + nums[right];
                if (currentSum == target) 
                {
                    return currentSum;
                }
                if (abs(currentSum - target) < abs(closestSum - target)) 
                {
                    closestSum = currentSum;
                }           
                if (currentSum > target) 
                {
                    --right;
                } else 
                {
                    ++left;
                }
            }
        }
        return closestSum;
    }
};