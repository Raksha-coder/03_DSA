//find power using function
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int Power(int a,int b){
    int pow = 1;
    while(b>=1){
        pow = pow * a;
        b--;
    }
    return pow;
}

int main() {
    int x = 2;
    int y = 10;
    
    int value = Power(x,y);
    cout<<value;

    return 0;
}
