/*
Que : find the duplicate value in array : [1 to n-1]
there is a catch in XOR 
If we see theoretically 
it gives zero when both the numbers are same 
like 1,2,3,4,1  XOR 1,2,3,4 => ans is 1

but if we think about canculation it is different 


ans = 0;

ans = 0 ^ 1 = 1;
ans = 1 ^ 2 = 3;
ans = 3 ^ 3 = 0;
ans = 0 ^ 1 = 1;
ans = 1 ^ 4 = 5;



after this second loop will run
ans = ans ^ i ;
ans = 5 ^ 1 = 4;
ans = 4 ^ 2 = 6;
ans = 6 ^ 3 = 5;
ans = 5 ^ 4 = 1;


so ans is 1.


*/



// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1,2,3,1,4};
    
    int ans = 0;
    for(int i=0;i<5;i++){
        ans = ans^arr[i];
    }
    
    for(int i=1;i<5;i++){
        ans = ans^i;
    }
    
    cout<<ans;

    return 0;
}
