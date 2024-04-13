#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int left = 0;
	int right = n-1;
	while(left < right){
		if(arr[left] > arr[right]){
			swap(arr[left],arr[right]);
			
			if(arr[right] < arr[right-1]){
					swap(arr[right],arr[right-1]);
			};
			
			cout<<arr[right];
			
			right--;	
			left++;
			
		
		}else{
			if(arr[right] < arr[right-1]){
				swap(arr[right],arr[right-1]);
					right--;
			}else if(arr[right] == arr[left]){
				left++;
			}else{
					right--;
			}
			
		
		}
	}
         
         
	for(int i=0;i<n;i++){
         	cout<<arr[i]<<" ";
	}

}
