//find smaller(min) and larger(max) number from array
#include<iostream>
using namespace std;


int GetMaxValue(int arr[],int size){
	
	int larger = INT_MIN;   //PEHLE HI SABSE CHOTA NUMBER INSERT KRLO.
	for(int i=0;i<size;i++){
		
		//inbuild function for max
		//larger = max(larger,arr[i]);
		
		if(arr[i] > larger){
			larger = arr[i];
		}
	}
	return larger;
}


int GetMinValue(int arr[],int size){
	int smaller = INT_MAX;
	for(int i=0;i<size;i++){
		
		//smaller =min(smaller,arr[i]);
		if(arr[i] < smaller){
			smaller = arr[i];
		}
	}
	
	return smaller;
}

int main(){
	int nums[5];
	
	
	//take value in array
	for(int i=0;i<5;i++){
		cin>>nums[i];
	}
	
	//find max
	int maxValue = GetMaxValue(nums,5);
	cout<<"max is :"<<maxValue<<endl;
	
	int minValue = GetMinValue(nums,5);
	cout<<"min is :"<<minValue;
}
