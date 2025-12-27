class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        for (int charIndex = 0; charIndex < strs[0].size(); ++charIndex) 
        {
            for (int stringIndex = 1; stringIndex < strs.size(); ++stringIndex) 
            {
                if (strs[stringIndex].size() <= charIndex || strs[stringIndex][charIndex] != strs[0][charIndex]) 
                {
                    return strs[0].substr(0, charIndex);
                }
            }
        }
        return strs[0];
    }
};