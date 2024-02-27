//MCQ QUESTION 


/*

int i = 3,a=2;
sum = a + (i++);  // yaha i increase nahi hua.
sum = 2 + 3 ;
output:
sum = 5
i = 4

int i = 3,a=2;
sum = a + (++i);  //already get increase.
sum = 2 + 4 ;
output:
sum = 6
i = 4




int i=11;
int a = ++i;
output:
i= 12, a = 12

*/

#include<iostream>
using namespace std;

int main(){
	int i = 7;
	//if we write this in sequence => to proper post increment and pre increment work krega.
	cout<<(++i)<<endl; //8
	cout<<(i++)<<endl; //8  i =9
	cout<<(i--)<<endl; //9 i=8
	cout<<(--i)<<endl; //7
}



















