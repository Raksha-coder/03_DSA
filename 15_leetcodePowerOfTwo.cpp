//leetcode : power of 2

//find the number is pow(2,i)
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int flag = 0;
        for(int i = 0;i<=INT_MAX;i++){
            if(n == pow(2,i)){
                flag = 1;
                break;
				
				
			// if there is a number which is not divisible of power of 2 then 
            }else if(n <= pow(2,i)){       //time limit exceed ho rhi thi , to ye logic lagaya
                flag = 0;
                break;
            }else{
                flag = 0;
            }
        }

        if(flag == 1){
            return true;
        }else{
            return false;
        }
    }

};

