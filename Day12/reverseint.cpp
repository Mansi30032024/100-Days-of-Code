#include<iostream>
#include<climits>
using namespace std;

int reverse(int x) {
        int revNum =0;
        while(x !=0)
        {
            int dig = x%10;
            if((revNum > INT_MAX/10)  || (revNum < INT_MIN/10)){//out of bound
                return 0;
            }
            revNum= (revNum*10)+dig;
            x /=10;
        }
        return revNum;
    }
int main(){
  int x;
  cin>>x;
  cout<<reverse(x)<<endl;
  return 0;
}