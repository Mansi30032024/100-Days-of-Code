class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

        int lsum =0 , rsum = 0;
        int maxSum = 0;
        for(int i =0; i<k ;i++) lsum = lsum +cardPoints[i];
        maxSum = lsum;
        int rIndex = n-1;
        for(int i=k-1;i>=0;i--){
            lsum = lsum - cardPoints[i];
            rsum = rsum + cardPoints[rIndex];
            rIndex--;
            maxSum = max(maxSum, lsum + rsum);
        }
        return maxSum;
    }
};
//TC:O(2*k)
//SC:O(1)