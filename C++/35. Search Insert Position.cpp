class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto const closestIt = std::lower_bound(nums.begin(), nums.end(), target);
        return std::distance(nums.begin(), closestIt);
    }
};