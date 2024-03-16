
#include <iostream>
using namespace std;

bool isPrime(int num){
    
    for(int i=2;i<num;i++){
        if(num%i == 0 ){
            return 1;    //not prime
        }
    }
    return 0; //prime
}

int main() {
    int num;
    cin>>num;

    if(isPrime(num)){
         cout<<"not prime";
       
    }else{
        cout<<"prime";
    }

    return 0;
}
