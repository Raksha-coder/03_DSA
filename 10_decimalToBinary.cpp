//decimal to binary 

/*
	
	isme 2 se divide kro ho jaega

*/

#include <iostream>
using namespace std;
int main() { 
    int n,binary = 0;
    cin>>n;
    
    while(n!=0){
        int val = n%2;  //1
        binary = (binary*10) + val;
        n /=2;  
    }
    cout<<binary;
    return 0;
}
