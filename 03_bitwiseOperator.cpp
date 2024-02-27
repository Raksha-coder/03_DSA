/*
Bitwise Operator:

and  - &   -  t t = t
or  - |   -   f f = f
not - ~   -  zero to one and one to zero
xor - ^   - same sign ho to zero nahi to one


left shift = 5<<1       === 00000101 shift this by 1  == 00001010 => 10
right shift = 5>>1      === 00000101 shift this by 1  == 00000010 => 2

problem will come in negative number and when number is big:
example : 010000000010 =>if we left shift  , the number will become negative



//trick of left and right shift
//in left shift , you can double the number based on count
//in right shift, you can divide the number and quotient ko print kar dena.
5<<2 => count is 2
5*2 = 10
10*2 = 20

5>>2 => count is 2
5/2 = 2 quotient
2/2 = 1
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
