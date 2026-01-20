class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string, int> wordCount;
        for (string word : words) 
        {
            wordCount[word]++;
        }
        vector<int> result;
        int left = 0;
        int right = 0;
        unordered_map<string, int> currentWindowCount;
        for (int offset = 0; offset < words[0].length(); offset++) 
        {
            left = offset;
            right = offset;
            currentWindowCount.clear();          
            while (right + words[0].length() <= s.length()) 
            {
                string currentWord = s.substr(right, words[0].length());
                right += words[0].length();
                if (!wordCount.contains(currentWord)) 
                {
                    currentWindowCount.clear();
                    left = right;
                    continue;
                }
                currentWindowCount[currentWord]++;
                while (currentWindowCount[currentWord] > wordCount[currentWord]) 
                {
                    string leftWord = s.substr(left, words[0].length());
                    currentWindowCount[leftWord]--;              
                    if (currentWindowCount[leftWord] == 0) 
                    {
                        currentWindowCount.erase(leftWord);
                    }
                    left += words[0].length();
                }
                if (right - left == words.size() * words[0].length()) 
                {
                    result.push_back(left);
                }
            }
        }
        return result;
    }
};