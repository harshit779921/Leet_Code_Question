class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        // Better Approach
        // unordered_map<int, int> freq;
        // for (int i = 0; i < grid.size(); ++i) {
        //     for (int j = 0; j < grid.size(); ++j) {
        //         freq[grid[i][j]]++;
        //     }
        // }
        // int repeat = 0, miss = 0, n = grid.size() * grid.size();
        // for (int i = 1; i <= n; ++i) {
        //     if (freq[i] == 2)
        //         repeat = i;
        //     if (freq[i] == 0)
        //         miss = i;
        // }
        // return {repeat, miss};

        // Optimal Approach
        int n = grid.size();
        int x = 0;
        int k = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                x ^= grid[i][j];
                x ^= k;
                k++;
            }
        }
        k = 1;
        while (!(x & k)) {
            k = k << 1;
        }
        int a = 0, b = 0;
        x = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] & k) {
                    a ^= grid[i][j];
                } else {
                    b ^= grid[i][j];
                }

                if (x & k) {
                    a ^= x;
                } else {
                    b ^= x;
                }
                x++;
            }
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == a) {
                    cnt++;
                }
            }
        }
        if (cnt) {
            return {a, b};
        }
        return {b, a};
    }
};