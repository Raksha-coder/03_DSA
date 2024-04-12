
/* 
Given an integer array nums of length n where all the 
integers of nums are in the range [1, n] and each integer appears 
once or twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant extra space.


Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
Example 2:

Input: nums = [1,1,2]
Output: [1]
Example 3:

Input: nums = [1]
Output: []

*/


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int arraySize = nums.size();
        int count = 0;
        vector<int> arr2;

        for(int i=0;i<arraySize;i++){
            for(int j = i+1; j< arraySize;j++){
            	//same value ko check na kare isliye.
//                 if(i==j){
//                     break;
//                 }

                if(nums[i] == nums[j]){
                    count = count +2;
                    if(count == 2){
                        
                        arr2.push_back(nums[i]);
                        count = 0;
                        break;
                    }
                }
            }
        }


        return arr2;

        }
    };
