#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int i=0;
	int sum = 0;
	while(n!=0){
		int bit = n&1;  //we will get last bit
		sum = (bit * pow(10,i)) + sum;   //1 * 10(0) + 0 => 1
		i++;
		n = n>>1;  //remove the last bit from n
	}
	cout<<sum;
	
	
}
