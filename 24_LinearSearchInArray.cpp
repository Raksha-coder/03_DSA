//linear search
#include<iostream>
using namespace std;

bool search(int arr[],int size,int find){
		for(int i=0;i<size;i++){
				if(find == arr[i]){
					return 1;
				}
		};
		return 0;
}

int main(){
	int size;
	cin>>size;
	
	int arr[size];
	cout<<"enter array values"<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	bool value = search(arr,size,2);
	if(value){
		cout<<"found";
	}else{
		cout<<"Not Found";
	}
	
	
	return 0;
}
