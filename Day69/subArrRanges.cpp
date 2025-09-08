
// sum of subarray minimums
// sum of subarray maximums
class Solution {
public:
  long long sumSubarrayMins(vector<int>& arr) {
     long long sum =0;
  
        for(int i=0;i<arr.size();i++){
            int mini = arr[i];
            for(int j =i ; j<arr.size();j++){
                mini = min(mini, arr[j]);
                sum = sum+mini;
            }
        }
        return sum;
    }
     long long sumSubarrayMaxs(vector<int>& arr) {
        long long sum =0;
    
        for(int i=0;i<arr.size();i++){
            int maxi = arr[i];
            for(int j =i ; j<arr.size();j++){
                maxi = max(maxi, arr[j]);
                sum = sum+maxi;
            }
        }
        return sum;
    }
    long long subArrayRanges(vector<int>& arr) {
       return sumSubarrayMaxs(arr) - sumSubarrayMins(arr);
    }
};

//TC:O(10n) -->O(n)
//SC:O(10n)-->O(n)

//brute-force
    long long subArrayRanges(vector<int>& arr) {
        int sum =0;
       int  largest, smallest;
        for(int i= 0;i<arr.size();i++){
             largest = arr[i], smallest = arr[i];
            for(int j=i+1;j<arr.size();j++){
                largest = max(largest, arr[j]);
                smallest = min(smallest, arr[j]);
                sum = sum + (largest- smallest);
            }
        }
        return sum;
    }


//TC:O(n^2)
//SC:O(1)