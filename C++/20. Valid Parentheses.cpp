class Solution {
public:
    bool isValid(string s) {
        if(s.length() % 2 != 0)
        {
            return false;
        }
        string stack;
        for (char current_char : s) {
            if (current_char == '(' || current_char == '{' || current_char == '[') 
            {
                stack.push_back(current_char);
            }
            else if (stack.empty() || !isMatchingPair(stack.back(), current_char)) 
            {
                return false;
            }
            else 
            {
                stack.pop_back();
            }
        }
        return stack.empty();
    }

    bool isMatchingPair(char left, char right) {
        return (left == '(' && right == ')') || (left == '[' && right == ']') || (left == '{' && right == '}');
    }
};