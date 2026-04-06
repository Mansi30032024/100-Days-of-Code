
class Solution {
  public:
    void solve(Node *root, int sum , int &maxSum,int len, int &maxLen){
        //base case 
        if(root == NULL){//2 cases --> left side completed , right side pending
      
          if(len>maxLen){ maxLen = len; maxSum= sum;  }  
          else if(len==maxLen){ maxSum = max(sum, maxSum);} 
          //no need to check for len<maxLen as searching for longest Path
          return ;
        }
        
        sum += root->data; 
        solve(root->left, sum , maxSum, len+1, maxLen); 
        solve(root->right, sum , maxSum, len+1, maxLen);  
        
    }
    int sumOfLongRootToLeafPath(Node *root) {
      int sum = 0, maxSum = INT_MIN;
      int len =0, maxLen =0;
      
      solve(root, sum , maxSum, len, maxLen);
      return maxSum;
    }
    
};