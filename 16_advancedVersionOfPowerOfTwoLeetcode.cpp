//leetcode : power of 2

//find the number is pow(2,i)
class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i = 0;i<30;i++){   //pow(2,30) instead of int_max(int max is a very big value)
            if(n == pow(2,i)){
                return true
                break;
            }
        }

        return false;
    }

};

