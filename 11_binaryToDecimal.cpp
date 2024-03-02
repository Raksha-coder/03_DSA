//binary to decimal
// 2 ki power lagti h 
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,binary = 0,i = 0;
    cin>>n;
    while(n!=0){
        int val = n%10;  //1
        binary = binary +  val*pow(2,i);  
        i++;
        n /=10;  
    }
    cout<<binary;
  

    return 0;
}
