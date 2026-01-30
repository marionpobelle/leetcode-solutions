class Solution {
public:
    string countAndSay(int n) {
        string res = "1";
        string currentSeq = "";
        while(--n)
        {
            currentSeq = "";
            for(int i = 0; i < res.size();)
            {
                int j = i;
                while(j < res.size() && res[j] == res[i])
                {
                    j++;
                }
                currentSeq += to_string(j - i);
                currentSeq += res[i];
                i = j;
            }
            res = currentSeq;
        }
        return res;
    }
};