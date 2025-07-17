
#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        if(m*n != original.size()) return ans;
        
        for(int i=0;i<m;i++){
            int st = i*n;
            int end = st + n;
            vector<int> row;

            for(int i= st;i<end;i++){
               row.push_back(original[i]);
            }
            ans.push_back(row);
        }
        return ans;
    }

int  main(){
    
  vector<int> original = {1, 2, 3, 4, 5, 6};
    int m = 2, n = 3;
    vector<vector<int>> res = construct2DArray(original, m, n);

     for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
  return 0;
}