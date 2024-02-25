//c to f
//formula => c = (32f - 32) * (5/9)
//formula => f = (c * (9/5))+32;

#include<iostream>
using namespace std;

int main(){
	double f,c;
	cin>>f;
	c = (f-32)*5/9;
	cout<<"The celsiu is : "<<c;
}
