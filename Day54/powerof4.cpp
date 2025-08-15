#include <iostream>
using namespace std;  

    bool isPowerOfFour(int n) {
    
        if(n<=0) return false;
      while(n%4 ==0){ 
          n = n/4; 
      }    
        return n==1;  //if reaches 1, it is a power of 4
    }
//TC:O(log4 n)
//SC:O(1)

int main() {
    int n=16;
    
    if (isPowerOfFour(n)) {
        cout << n << " is a power of 4" << endl;
    } else {
        cout <<" is not a power of 4" << endl;
    }
    
    return 0;
}