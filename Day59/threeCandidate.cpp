
class Solution {
  public:
    int maxProduct(vector<int> arr) {
      
        int n = arr.size();
        int maxf = INT_MIN, maxs =INT_MIN, maxt=INT_MIN;
        
        int minf = INT_MAX, mins = INT_MAX;
        //swap concept 
        for(int i =0; i< n; i++){
            if ( arr[i]>maxf){
                maxt=maxs;
                maxs=maxf;
                maxf=arr[i];
                
            }
            else if (arr[i]> maxs){
                maxt=maxs;
                maxs= arr[i];
                
            }
            else if (arr[i]>maxt){
                maxt = arr[i];
            }
            
            if(arr[i]<minf){
                mins = minf;
                minf = arr[i];
            }
            else if(arr[i]<mins){
                mins = arr[i];
            }
        }
        return max(minf*mins*maxf, maxf*maxs*maxt);
    }
};