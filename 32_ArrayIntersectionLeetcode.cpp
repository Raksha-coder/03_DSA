/*
Array Intersection :
Problem statement
You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.

Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

Note :
1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original arrays.
4. If there is no intersection present then return an empty array.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= T <= 100
1 <= N, M <= 10^4
0 <= A[i] <= 10^5
0 <= B[i] <= 10^5

Time Limit: 1 sec
Sample Input 1 :
2
6 4
1 2 2 2 3 4
2 2 3 3
3 2
1 2 3
3 4  
Sample Output 1 :
2 2 3
3   
Explanation for Sample Input 1 :
For the first test case, the common elements are 2 2 3 in both the arrays, so we print it.

For the second test case, only 3 is common so we print 3.
Sample Input 2 :
2
3 3 
1 4 5
3 4 5
1 1
3
6
Sample Output 2 :
4 5
-1

*/



// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdio.h>
#include<vector>
#include <limits.h>
using namespace std;
int main() {
    int arr[6] = {1,2,2,2,3,4};
    int arr2[4] = {0,0,0,8};
    vector<int> arr3;
    for(int i=0;i<6;i++){
        for(int j=0;j<4;j++){
        	
        	//for time complexity reducing
        	if(arr[i] < arr2[j]){
        		break;
			}
			
			//jo dono array h , wo sorting order m h ,
			// arr = 1,4,5
			// arr2 = 3,6
			
			//agar 1 pehle check kar liya 3 se , and ab pata h ki 3 ke aage sab badhe hi number 
			//aane wale h , to 1 ko sab number se check karne ki zarurat nahi h.
        	
        	
            if(arr[i] == arr2[j]){
                arr3.push_back(arr[i]);
                arr2[j] =INT_MIN;   //just replace the found value to int_min , so that next value cannot get compare with this.
                break;
            }
        }
    }
    
    if(arr3.size() == 0){
        cout<<-1;
    }
    
    for(int i=0;i<arr3.size();i++){
        cout<<arr3[i]<<" ";
    }

    return 0;
}
