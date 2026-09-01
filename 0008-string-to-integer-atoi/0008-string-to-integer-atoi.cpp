class Solution {
public:
    int myAtoi(string s) { int i = 0, sign = 1;
        long result = 0;

        // 1. Ignore leading whitespaces
        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        // 2. Check sign
        if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // 3. Convert digits to integer
        while (i < s.length() && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');

            // 4. Handle overflow
            if (sign == 1 && result > INT_MAX) return INT_MAX;
            if (sign == -1 && -result < INT_MIN) return INT_MIN;

            i++;
        }

        return sign * result;
    }
};
        