/*

input : n = 5;
output : 2
explanation: binary of 5 is : 101 , it's 1 compliment is : 010 which is 2

*/ 
#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  int i= 0,sum = 0;
  while(n>0){
      int val = n%2;                //5%2 = 1   // 2%2 = 0   //1%2 = 1
      sum = sum +(!val)*pow(2,i);  // 0  + (!1)*pow(2,0) => 0   // 0 + (!0)*pow(2,1) => 2 // 2 + (!1)*pow(2,2)=>0
      i++;                         // i = 1;  //i=2
      n = n/2;                    //2      //1
  }
  
  cout<<sum;   //0+2+0 => 2

}
