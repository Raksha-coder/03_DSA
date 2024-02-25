// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    
    //spacing matters
    for(int i=1;i<=5;i++){
        
        for(int j=5;j>i;j--){
            cout<<'1';
        }
        
        for(int j=1;j<=i;j++){
            cout<<'*';
        }
        cout<<endl;
    }
        
    return 0;
}

/*
1111*
111**
11***
1****
*****
*/
