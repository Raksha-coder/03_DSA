
#include <iostream>
using namespace std;
int main() {
   char signs[5]={'.',',','!',':',';'};
   string takevalue ;
   cin>>takevalue;
   
   for(int i=0;i<takevalue.length();i++){
       
       for(int j=0;j<5;j++){
            if(takevalue[i] == signs[j]){
                takevalue.erase(i, 1); 
                i--; 
                break;
          
       }
       }
      
   }
   cout<<takevalue;

    return 0;
}


//input : Rak!sha
//output : Raksha
