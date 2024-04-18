//selection sort
//find the smallest number in unsorted array
//and swap it to the first element in array


//time complexity of this code
// O(n) + O(n*n) + O(n) = O(n*n)


//spce complexity

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	//selection sort
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i] > arr[j]){
				swap(arr[i],arr[j]);
			}
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
