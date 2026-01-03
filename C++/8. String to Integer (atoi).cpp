class Solution {
public:
    int myAtoi(string s) {
        int res = 0;
        int index = 0;
        vector<char> digits = {'0','1','2','3','4','5','6','7','8','9'};
        int sign = 1;
        while (index < s.length() && s[index] == ' ') 
        {
            ++index;
        }
        if(s[index] == '-' || s[index] == '+')
        {
            if(s[index] == '-')
            {
                sign = -sign;
            }
            index++;
        }
        for(int i = index; i < s.length(); i++)
        {
            if(std::find(digits.begin(), digits.end(), s[i]) == digits.end())
            {
                break;
            }
            else if(res > INT_MAX / 10 || (res == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
            {
                if(sign < 0)
                {
                    return INT_MIN;
                }
                else
                {
                    return INT_MAX;
                }

            }
            res = res * 10 + (s[i] - '0');
        }
        return res * sign;
    }
};