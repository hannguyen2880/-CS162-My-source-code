class Solution {
public:
    int generateTribonacci(int i, int* res) {
        if (res[i] != -1) return res[i];
        if (i == 0) {
            res[i] = 0;
            return res[i];
        }
        if (i == 1 || i == 2) {
            res[i] = 1;
            return res[i];
        }
        res[i] = generateTribonacci(i - 1, res) + generateTribonacci(i - 2, res) + generateTribonacci(i - 3, res);
        return res[i];
    }
    int tribonacci(int n) {
        int* res = new int[n + 1];
        for (int i = 0; i <= n; ++i) res[i] = -1;

        int ans = generateTribonacci(n, res); 
        delete[] res;
        return ans;
    }
};