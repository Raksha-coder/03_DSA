//prime number Program

//Note : break jo h wo bas else wali condition mai
//lagega. kyuki agar if mai lagaya to flag true false hote rahega

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  bool flag=true;

  for(int i=2;i<=10;i++){
      if(n%i !=0 || n==i){   
          flag= true;
       //yaha break nahi lagega
      }else {
          flag = false;
          break;
      }
  }
  if(flag == true){
      cout<<"prime";
  }else{
      cout<<"not prime";
  }

  
}
