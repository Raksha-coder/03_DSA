/*
Bitwise Operator:

and  - &   -  t t = t
or  - |   -   f f = f
not - ~   -  zero to one and one to zero
xor - ^   - same sign ho to zero nahi to one


left shift = 5<<1       === 00000101 shift this by 1  == 00001010 => 10
right shift = 5>>1      === 00000101 shift this by 1  == 00000010  now where is that 1 bit => 10000010
*/

#include<iostream>
using namespace std;

int main(){
	int a = 4;
	int b= 6;
	cout<< (a&b) <<endl;   //100=4   // 110=6   // 100 + 110 =100  //ans = 4
	cout<< (a|b) <<endl;   // 100 | 110  => 110 // ans=6 
	cout<< (~a) <<endl;    //00000100 => 11111011 => 1s compliment then 2s compliment = -5 
	cout<< (a^b) <<endl;    //100 ^ 110 => 010 => 2
	cout<< (5<<1) <<endl;
	cout<< (5>>1)<<endl;
}
