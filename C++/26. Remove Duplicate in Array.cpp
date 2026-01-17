class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int currentIndex = 0;   
        for (int currentNum : nums) 
        {
            if (currentIndex == 0 || currentNum != nums[currentIndex - 1]) 
            {
                nums[currentIndex] = currentNum;
                currentIndex++;
            }
        }
        return currentIndex;
    }
};