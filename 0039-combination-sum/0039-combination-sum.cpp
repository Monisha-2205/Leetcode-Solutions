class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        dfs(candidates, target, 0, curr, res);
        return res;
    }

    void dfs(vector<int>& candidates, int target, int idx,
             vector<int>& curr, vector<vector<int>>& res) {

        if (target == 0) {
            res.push_back(curr);
            return;
        }

        if (target < 0) return;

        for (int i = idx; i < candidates.size(); i++) {
            curr.push_back(candidates[i]);
            dfs(candidates, target - candidates[i], i, curr, res);
            curr.pop_back();
        }
    }
};