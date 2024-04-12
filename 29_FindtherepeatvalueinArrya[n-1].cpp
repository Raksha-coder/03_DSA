//find the duplicate value in array
/*
que: jo array ka size hoga , uske andar ki hi value uske andar aaengi

jese if array is of size 5
[1 to n-1] ye values array mai hogi = [1,2,3,4]  and ek value repeat hogi
[1,2,3,4,1]

isi 1 ko find karna h .
repeat value ko find karna h

*/
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1,2,3,1,4};
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            
            if(i==j){
                break;
            }
            if(arr[i] == arr[j]){
                cout<<arr[i];
                break;
            }
        }
    }

    return 0;
}
