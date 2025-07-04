 #include<iostream>
 using namespace std;
 int addDigits(int num) {
        int sum=0;
// recursive approach
        if (num == 0) return 0;
       while(num){
          sum += (num%10);
          num /= 10;
       }
       if(sum<10) return sum;
       else return addDigits(sum); 
    }
  int main(){
      int num ;
      cin>>num;
      cout<<addDigits(num)<<endl;
    return 0;
  }

  /*Iterative approach
  
while (num>9){
    while(num){
        sum += (num%10);
        num /=10;
    }
    num = sum;
    sum = 0;
}
return num;
  */