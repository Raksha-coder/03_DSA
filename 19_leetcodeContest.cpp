//leetcode 
/*

Example 1:

Input: nums = [1,2,3]

Output: 6

Explanation: The encrypted elements are [1,2,3]. The sum of encrypted elements is 1 + 2 + 3 == 6.

Example 2:

Input: nums = [10,21,31]

Output: 66

Explanation: The encrypted elements are [11,22,33]. The sum of encrypted elements is 11 + 22 + 33 == 66.

 

*/


class Solution {
    
    
public: 
    int encrypt(int x){
        
        //find the greater num first
        int store = -1;
        int count = 0;
        while(x != 0){
            count = count + 1;
            int prev = x%10;
            if(prev > store){
                store = prev;
            }
            x =x/10;
        }
        
        //count sahi h
        //got the store value =  greatest number
        // now replace;
        int val = 0;
        while(count !=0){
            val = (val*10) + store;
            
            count--;
        }
        return val;
        
    }
    
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for (auto element = nums.begin(); element != nums.end(); ++element) {
             sum = sum + encrypt(*element);
    }
        return sum;
        
    }
};
