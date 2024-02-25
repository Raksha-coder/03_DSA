// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    
    int n,val = 65;
    cin>>n;
    
      for(int i=1;i<=n;i++){
          val = 65+i-1;
          for(int j=1;j<=n;j++){
              cout<<char(val);
               val++;
          }
         
          cout<<endl;
      }
        
        
    return 0;
}

/*
output:

4
ABCD
BCDE
CDEF
DEFG

*/
