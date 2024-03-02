/*

first you will get an array
square all values of array 
then sort them in ascending Order.


*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int num[5] = {-4,-1,0,3,10};
    int arraySize =  sizeof(num) / sizeof(int);
    
//square
    for(int i=0;i<arraySize;i++){
        num[i] = pow(num[i],2);
    }

        
//sort
    for(int i=0;i<arraySize-1;i++){
        for(int j=i+1;j<arraySize;j++){
            if(num[i]>num[j]){
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

//print
    for(int i = 0; i<arraySize;i++){
        cout<<num[i]<<" ";
    }
    return 0;
}
