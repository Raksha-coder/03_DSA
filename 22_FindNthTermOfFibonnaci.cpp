// find the nth term of fibonacci

/*
example :
nthTerm = 5;        utne number print karwa do
print : 0 1 1 2 3 


*/

#include <iostream>
using namespace std;

void fibo(int nth){
    int FirstTerm = 0;
    int secondTerm = 1;
   cout<<FirstTerm<<" "<<secondTerm<<" ";
    for(int i=1;i<nth-1;i++){
         int nextTerm = FirstTerm + secondTerm;
         cout<<nextTerm<<" ";
         FirstTerm = secondTerm;
         secondTerm = nextTerm;
    }
}


int main() {
    int nthTerm ;
    cin>>nthTerm;
    
    fibo(nthTerm);
    
    return 0;
}
