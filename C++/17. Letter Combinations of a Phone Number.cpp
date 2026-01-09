class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> digitToLetters = {
            "abc",  // 2
            "def",  // 3
            "ghi",  // 4
            "jkl",  // 5
            "mno",  // 6
            "pqrs", // 7
            "tuv",  // 8
            "wxyz"  // 9
        };
        vector<string> result = {""};
        for (char digit : digits) 
        {
            string letters = digitToLetters[digit - '2'];         
            vector<string> newCombinations;
            for (const string& existingCombination : result) 
            {
                for (char letter : letters) 
                {
                    newCombinations.push_back(existingCombination + letter);
                }
            }
            result = move(newCombinations);
        }     
        return result;
    }
};