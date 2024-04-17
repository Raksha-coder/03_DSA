/*

	Binary Search
	
	mid = start + (end-start)/2;
	if some how our start+end is bigger than int + int size,
	here mid will give error.
	that's why we are not using the below formula
	mid = (start+end)/2;
	
	
	
	
	the array should be monotonic means sorted in ascending and descending order.
*/

#include<iostream>
using namespace std;


int BinarySearch(int arr[],int size,int key){
	int start = 0;
	int end = size-1;
	int mid = start + (end - start)/2;
	
	while(start<=end){
		if(arr[mid] == key){
			return mid; //index
		}else if(key > arr[mid]){
			start = mid+1;
		}else{
			end = mid-1;
		}
		mid = start + (end-start)/2;
	}
	
	return -1;
}

int main(){
	int arr[6]={1,4,6,8,7,22};   
	int arr2[5]={10,15,17,19,45};
	
	int value = BinarySearch(arr2,5,10);
	cout<<value;
	
	
	
	return 0;
}
