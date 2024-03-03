/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes 
the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

*/

class Solution {
public:
    int reverse(int x) {

        int rev = 0;
        while(x!=0){
                int lastVal  = x%10;

                if( (rev > (INT_MAX/10) ) || (rev < (INT_MIN/10)) ){
                        return 0;
                }
                
                //because hume rev*10 li value check karni thi, ki uski value exceed kar rhi h 
                // ya nhi 
                //ek badhe number ko agar 10 se divide krege to , it will become smaller number
                // so our time complixity will get reduce.

                rev = (rev*10) + lastVal;
                x /= 10;
        }

        return rev;
    
    }
};
