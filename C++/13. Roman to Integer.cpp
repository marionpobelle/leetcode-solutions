class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanValues = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int sum = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(i < s.length() - 1 && romanValues[s[i]] < romanValues[s[i + 1]])
            {
                sum += romanValues[s[i + 1]] - romanValues[s[i]];
                i++;
            }
            else
            {
                sum += romanValues[s[i]];
            }
        }
        return sum;
    }
};