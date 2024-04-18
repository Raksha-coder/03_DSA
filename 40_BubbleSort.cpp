/*
Bubble Sort :
Repeatedly swap two adjacent element
if they are in wrong order and the bigger number will get 
arranged automatically to the end.

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
	
	int j=0;
	while(j!=n){
		for(int i=0;i<n-j;i++){
			if(arr[i] > arr[i+1]){
				swap(arr[i],arr[i+1]);
			}
		}
		j++;
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
