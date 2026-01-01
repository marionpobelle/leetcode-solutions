class Solution {
public:
    string convert(string s, int numRows) {
        if(s.length() == 1 || numRows == 1)
        {
            return s;
        }
        vector<string> charaRows(numRows);
        int currentRow = 0;
        int direction = -1;
        for(char c : s)
        {
            charaRows[currentRow] += c;
            if(currentRow == 0 || currentRow == numRows - 1)
            {
                direction = -direction;
            }
            currentRow += direction;
        }

        string res = "";
        for(string row : charaRows)
        {
            res += row;
        }
        return res;
    }
};