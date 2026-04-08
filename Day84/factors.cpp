
#include <iostream>
#include<vector>
using namespace std;

int main() {
  int num ;
  cout<<"Enter number : ";
  cin>>num;
  //optimal approach
    for(int i=1;i*i<=num;i++){
        if(num%i== 0){
           cout<<i<< " ";
           //if one we get other automatically get
           if( i != num/i){
               cout<<num/i<<" ";
           }
        }
    }  
  cout<< endl;
  return 0;
}
//TC: O(sqrt(num))
//SC:O(1)


//brute force

//  for(int i=1;i<=num;i++){
//         if(num%i== 0){
//            cout<<i<< " ";
//         }
//     }
//TC:O(num)
//SC:O(1)