//pattern
/*
3 2 1
3 2 1 
3 2 1



1 2 3
4 5 6
7 8 9

*/


#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		for(int j=n;j>=1;j--){
			cout<<j;
		}
		cout<<endl;
	}
	
	cout<<endl<<endl;
	
	int count = 1;
for(int i=1;i<=n;i++){
		for(int j=n;j>=1;j--){
			cout<<count;
			count++;
		}
		cout<<endl;
}	
	
	
	
	return 0;
}
