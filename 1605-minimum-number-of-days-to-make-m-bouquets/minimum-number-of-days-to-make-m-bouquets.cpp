class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = bloomDay[0];
        int high = bloomDay[0];
        int n = bloomDay.size();
        for (int i = 0; i < n; i++) {
            low = min(low, bloomDay[i]);
            high = max(high, bloomDay[i]);
        }
        int maxInArray = high;
        while (low <= high) {
            int mid = (low + high)/2;
            int num = 0;
            int count = 0;
            for (int i = 0; i < n; i++) {
                if (bloomDay[i] > mid) {
                    num += count/k;
                    count = 0;
                } else {
                    count++;
                }
            }
            num += count/k;
            if (num < m) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return (low <= maxInArray) ? low : -1;
    }
};