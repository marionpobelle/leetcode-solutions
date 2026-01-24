class Solution {
public:
    int search(vector<int>& nums, int target) {
        const auto it = std::find(nums.begin(), nums.end(), target);
        if(it != nums.end())
        {
            return std::distance(nums.begin(), it);
        }
        else
        {
            return -1;
        }
    }
};