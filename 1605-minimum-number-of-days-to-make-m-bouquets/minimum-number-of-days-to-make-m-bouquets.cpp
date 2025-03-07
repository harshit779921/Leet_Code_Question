class Solution {
public:
    bool check(vector<int>& bloomDay, int m, int k, int mid) {
        int cnt = 0, bouquet = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= mid) {
                cnt++;
            } else {
                bouquet += (cnt / k);
                cnt = 0;
            }
        }
        bouquet += (cnt / k);
        if (bouquet >= m)
            return true;
        else
            return false;
    }

public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = bloomDay[0], high = bloomDay[0];
        for (int i = 1; i < bloomDay.size(); i++) {
            low = min(bloomDay[i], low);
            high = max(bloomDay[i], high);
        }
        long long val = (long long)m * (long long)k;
        if (val > bloomDay.size())
            return -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (check(bloomDay, m, k, mid)) {
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return low;
    }
};