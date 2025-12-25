class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
        {
            return false;
        }
        long long a = x;
        long long b = 0;
        if (a % 10 == 0)
        {
            return a == 0;
        }
        do 
        {
            b = 10 * b + a % 10;
            if (a == b)
            {
                return true;
            }
            a = a / 10;
        } while (a > b);
        return a == b;
    }
};