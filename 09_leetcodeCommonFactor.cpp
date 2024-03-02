//common factor of 2 numbers
// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

//function   => here vector act as array
vector<int> factors(int x){   //50
    vector<int> num;
    for(int i=1;i<=100;i++){
        if(x%i == 0){
              num.push_back(i);
              num.push_back(x/i);
        }
    }
    
    //sort the vector
    sort(num.begin(), num.end());
    // Remove duplicate values from vector
    num.erase(unique(num.begin(), num.end()), num.end());
  
    return num;
}


int main() {
    int a,b;
    cin>>a>>b;
    
    vector<int> value1 =  factors(a);
    vector<int> value2 = factors(b);
    
    vector<int> finalArray;
      
      
      for(auto i : value1){
          for(auto j: value2){
              if(i==j){
                  finalArray.push_back(i);
              }
          }
      }
      
    for(auto i = 0;i<finalArray.size();i++){
        cout<<finalArray[i]<<" ";
    }


    return 0;
}
