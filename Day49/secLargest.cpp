class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        
        int n = arr.size();
      
        
        int largest  =-1;//INT_MIN
        int secL =-1;
        
        for(int i=0;i<n;i++){//O(n)
            
            if(arr[i]>largest){
                 secL=largest; // swap concept
                largest = arr[i];
            } 
          else  if(arr[i]>secL && arr[i] != largest){
                secL = arr[i];
            }
        }
        return secL;
        return -1;
        
    }
};
/*
sort(arr.begin(), arr.end()); //O(n log n)
         //unique secLargest
         for(int i=n-2;i>=0;i--){//O(n)
             if(arr[i] !=arr[n-1]) return arr[i];

         }
        return -1;
        TC: O(n log n + n)
        */

/*
 for(int i=0;i<n;i++){ //O(n)
            if(arr[i]>largest) largest = arr[i];
        }
        for(int i=0;i<n;i++){//O(n)
            if(arr[i]>secL && arr[i] < largest){
                secL = arr[i];
            }
        }
        return secL;
        return -1;
        TC:O(2n)
*/
