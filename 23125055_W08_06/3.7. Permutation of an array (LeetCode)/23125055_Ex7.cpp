class Solution {
public:
    void backtracking(int i, int& n, bool* used, vector<int>& nums, vector<int>& cur, vector<vector<int>>& ans) {
        if (i == n) {
            ans.push_back(cur);
            return;
        }

        for (int j = 0; j < n; ++j) {
            if (used[j] == true) continue;
            used[j] = true;
            cur.push_back(nums[j]);
            backtracking(i + 1, n, used, nums, cur, ans);
            used[j] = false;
            cur.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        bool* used = new bool[n]();
        vector<int> curArr;
        vector<vector<int>> ans;
        backtracking(0, n, used, nums, curArr, ans);

        delete[] used;
        return ans;
    }
};