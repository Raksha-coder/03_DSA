//Reverse the array 
//array pointer ki tarah ki kaam karta h.

#include <iostream>
using namespace std;

void printArray(int arr[],int size)
{
   for(int i=0;i<size;i++){
       cout<<arr[i]<<" ";
   } 
   
   cout<<endl;
}


void reverse(int arr[],int size)
{
    int start = 0;
    int end = size-1;
    
    while(start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
   int arr[6] = {1,4,0,5,-2,15};
   int brr[5] = {4,5,1,3,6};
   
   reverse(arr,6);
   reverse(brr,5);
       
    printArray(arr,6);
    printArray(brr,5);
 

    return 0;
}
