class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        int left = -1;
        int right = -1;
        for(left = 0; left < s.length(); left++)
        {
            cout << "Beginning for loop left: " << left << s[left] << endl; 
            right = left;
            string currentStr = "";
            int currentLong = 0;
            while(right < s.length())
            {   
                cout << "While right: " << right << s[right] << endl;              
                const auto it = std::find(currentStr.begin(), currentStr.end(), s[right]);
                if(it == currentStr.end())
                {
                    currentStr += s[right];
                    currentLong++;
                    right++;
                    cout << "Increasing length: " << currentStr << currentLong << endl; 
                }
                else
                {
                    cout << "Breaking" << endl; 
                    break;
                } 
            }
            cout << "=============================" << endl; 
            if(currentLong > longest)
            {
                longest = currentLong;
            }
        }
        return longest;
    }
};