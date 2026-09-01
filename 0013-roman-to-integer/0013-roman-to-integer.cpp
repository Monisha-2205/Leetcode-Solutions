class Solution {
public:
    int romanToInt(string s) {
        int val[128] = {};
        val['I'] = 1;
        val['V'] = 5;
        val['X'] = 10;
        val['L'] = 50;
        val['C'] = 100;
        val['D'] = 500;
        val['M'] = 1000;

        int res = 0;

        for (int i = 0; i < s.size(); i++) {
            if (i + 1 < s.size() && val[s[i]] < val[s[i + 1]])
                res -= val[s[i]];
            else
                res += val[s[i]];
        }

        return res;
    }
};