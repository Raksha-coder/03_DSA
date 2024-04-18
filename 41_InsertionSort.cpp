//Insertion sort
/*
logic is bit complex
Insert an element from unsorted array 
to its correct position in sorted array.

12 45 23 51 19 8

iteration 1 :
when i = 0;
12 45 23 51 19 8

when i = 1:
12 45 23 51 19 8

when i = 2;
12 45 45 51 19 8
12 23 45 51 19 8

when i=3;
12 23 45 51 19 8

when i = 4;
12 23 45 51 51 8
12 23 45 45 51 8
12 23 23 45 51 8
12 19  23 45 51 8

when i = 5;
12 19 23 45 51 51
12 19 23 45 45 51
12 19 23 23 45 51
12 19 19 23 45 51
12 12 19 23 45 51
8 12 19 23 45 51
sorted finish
*/
#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	//insertion sort
	for(int i=0;i<n;i++){
		int current = arr[i];
		int j = i-1;
		
		while(arr[j]>current && j>=0){  //condition ko hi loop mai daal diya
			arr[j+1] = arr[j];   //j+1 mai j ki values, it is not swapping 
			j--;
		}
		arr[j+1] = current;
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}





















