 #include<iostream>
using namespace std;
 
 int trailingZeroes(int n) {
        //10--> 2, 5
        //number of factors of 5
        int  cnt =0;
        while(n > 0){
          n /= 5; //count multiple 
          cnt += n; 
        }
        return cnt;
    }
    
int main() {
    int n=6;      
//  cin>>n;
 
    cout << trailingZeroes(n) << endl;
    return 0;
}