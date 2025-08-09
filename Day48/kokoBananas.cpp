class Solution {
public:
   
    int findmax(vector<int> &arr){
      int maxi= INT_MIN;
      int n = arr.size();
      for(int i =0;i<n;i++){
              maxi = max(arr[i], maxi);
          
       }
      return maxi;
  }
  long long calculatehrs(vector<int> &arr, int hourly ){
      long long totalH =0;
      int n = arr.size();
      for(int i =0;i<n;i++){
          totalH += ceil(1.0* arr[i]/hourly);
       }
      return totalH;
  }
     int minEatingSpeed(vector<int>& arr, int h) {
   
        int low =1, high= findmax(arr);
        while(low<=high){
            int mid = (low+high)/2;
            long long totalH = calculatehrs(arr, mid);
            if(totalH <= h){
                  high = mid-1;
              }
            else low =mid+1;
        } return low;
     }
};
/*
TC: O(n log m) → n = piles count, m = max pile size.
SC: O(1).

*/