class Solution {
public:
    int findMinDiff(vector<int>& arr, int m) {
        if (m == 0 || arr.size() < m) return 0;

        sort(arr.begin(), arr.end());

        int min_dif = INT_MAX;
        for (int i = 0; i + m - 1 < arr.size(); ++i) {
            int dif = arr[i + m - 1] - arr[i];
            min_dif = min(min_dif, dif);
        }

        return min_dif;
    }
};
//TC:O(n logn)
//SC:O(1)