class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int x = 0; x < nums.size(); x++)
        {
            int y = target - nums[x];
            const auto it = std::find(nums.begin(), nums.end(), y);
            int indexY = std::distance(nums.begin(), it);
            if(it != nums.end() && x != indexY)
            {
                result.push_back(x);
                result.push_back(indexY);
                return result;
            }
        }
        throw invalid_argument("No solution was found");
    } 
};