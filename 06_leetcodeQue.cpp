//leetcode
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int product = 1;
   int sum = 0;
   while(n>0){
       int val = n%10;//4
       product = product * val ; 
       sum = sum + val;
       n = n/10; //23
   }
   
   int sub = product - sum;
   cout<<sub;
   
    return 0;
}
