//find the unique number
//input: odd numbers
// i/p : 1 3 2 5 2 3 1
//o/p : 5

/*
in XOR = it give the zero if both values are same
2^1^3^6^1^2^3 = 0^0^0^6^0^0^0 = 6

*/
#include<iostream>
using namespace std;

int main(){
	int arr[7] = {2,1,3,6,1,2,3};
	
	int ans = 0;
	for(int i=0;i<7;i++){
		ans = ans ^ arr[i];
	}
	cout<<ans;
	return 0;
}
