// Alternate swapping

/*
example : 1 2 3 4 5 6 
desired o/p : 2 1 4 3 6 5


*/

#include <iostream>
using namespace std;

void printArray(int arr[],int size)
{
   for(int i=0;i<size;i++){
       cout<<arr[i]<<" ";
   } 
   
   cout<<endl;
}


void alternateSwapping(int arr[],int size)
{
    int j = 0;
    
    for(int i=0;i<size;i++){
        int temp  = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        j = j + 2;
    }
}

int main() {
   int arr[6] = {1,2,3,4,5,6};
   int brr[5] = {4,5,1,3,6};
   
   alternateSwapping(arr,6);
   //reverse(brr,5);
       
    printArray(arr,6);
    //printArray(brr,5);
 

    return 0;
}
