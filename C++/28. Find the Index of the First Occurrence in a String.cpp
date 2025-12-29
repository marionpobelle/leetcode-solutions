class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = 0;
        while(index < haystack.length())
        {
            const auto it = std::find(haystack.begin() + index, haystack.end(), needle[0]);
            int itindex = std::distance(haystack.begin(), it);
            cout << itindex << endl;
            if(it >= haystack.end() || needle.length() > haystack.length() - itindex)
            {
                return -1;
            }
            for(int i = 0; i < needle.length(); i++)
            {
                if(needle[i] != haystack[itindex + i])
                {
                    index = itindex + 1;
                    break;
                }
                else if(i == needle.length() - 1)
                {
                    return itindex;
                }
            }
        }
        return -1;
    }
};