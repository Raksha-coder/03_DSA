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

QUE 3 : ek infinite loop mai humne switch use kiya h and us loop ke andar hum break use nahi kr sakte, ho will you come
out of the loop the? agar switch ke andar break ho to wo bas switch se bahar aaega na ki loop se.
Ans : 
use exit()
for using exit() in-build function , you have to use stdlib.h header file.
automatic storage objects are not destroyed by calling this function in C++.
write exit(0)=> show successful termination , any other number will not terminate the loop.
this function do not return any value.it's type is void

note : exit() function performs some cleaning before the termination of the program like connection termination, buffer flushes, etc.


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



















