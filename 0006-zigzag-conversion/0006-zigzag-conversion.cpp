class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size()) return s;

        vector<string> rows(numRows);
        int curr = 0;
        bool down = true;

        for (char c : s) {
            rows[curr].push_back(c);

            if (curr == 0) down = true;
            if (curr == numRows - 1) down = false;

            curr += down ? 1 : -1;
        }

        string res;
        for (string& row : rows)
            res += row;

        return res;
   
    }
};