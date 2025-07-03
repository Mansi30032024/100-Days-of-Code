
 #include<iostream>
 #include<vector>
 using namespace std;
int countPrimes(int n) { // range 
        int cnt=0; 
        vector<bool> isPrime(n+1, true);
        for(int i=2;i<n;i++){
            if(isPrime[i]) {  //sieve  of eratosthenes
                cnt++;
            for(int j=i*2; j<n; j=j+i) { isPrime[j] = false;}
            }
        }
        return cnt;
    }
  int main(){
    int n ;
    cin>>n;
    cout<<countPrimes(n)<<endl;
    return 0;
  }