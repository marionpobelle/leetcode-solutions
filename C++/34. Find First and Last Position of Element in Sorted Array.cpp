class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        const auto it = std::find(nums.begin(), nums.end(), target);
        if(it == nums.end())
        {
            return {-1, -1};
        }
        else
        {
            int start = std::distance(nums.begin(), it);
            int end = start;
            for(int i = start + 1; i < nums.size(); i++)
            {
                if(nums[i] == target)
                {
                    end++;
                }
                else
                {
                    break;
                }
            }
            return {start, end};
        }
    }
};