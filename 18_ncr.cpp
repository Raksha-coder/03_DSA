// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//ncr

int fact(int num){
    
       int facto = 1;
       while(num >=1){
           facto = facto * num;
           num--;
       }
        return facto;
   
}

int nCr(int n,int r){
    int num = fact(n);
    int denom = fact(r) * fact(n-r);
    
    return num/denom;
}

int main() {
    int n,c;
    cin>>n>>c;
    
    int ncr = nCr(n,c);
    cout<<ncr;
}
