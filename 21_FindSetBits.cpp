// first find the set bit of a 
// then set bit of b 
//then add then and print


//set bit means 1 

/*
2 = 10
3 = 11

so total set bit is 1

*/
#include <iostream>
using namespace std;

int setBits(int x){
    int count = 0;
    while(x !=0){
        int value = x & 1;
        if(value == 1){
            count++;
        }
        x = x>>1;
    }
    
    return count;
}


int main() {
  int a,b;
  cin>>a>>b;

  int setBitCountOfA = setBits(a);
  int setBitCountOfB = setBits(b);
  
  cout<<setBitCountOfA + setBitCountOfB;
    
    return 0;
}
