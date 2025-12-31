class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int maxLength = 1;

        for (int i = 0; i < s.length(); i++) 
        {
            for (int j = 0; j <= 1; j++) 
            {
                int left = i;
                int right = i + j; 
                while (left >= 0 && right < s.length() && s[left] == s[right]) 
                {
                    int currentLength = right - left + 1;
                    if (currentLength > maxLength) 
                    {
                        start = left;
                        maxLength = currentLength;
                    }
                    left--;
                    right++;
                }
            }
        }
        return s.substr(start, maxLength);
    }
};