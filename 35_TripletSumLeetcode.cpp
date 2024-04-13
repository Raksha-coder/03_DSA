/*
Problem statement
You are given an array/list ARR consisting of N integers. Your task is to find all the distinct triplets present in the array which adds up to a given number K.

An array is said to have a triplet {ARR[i], ARR[j], ARR[k]} with sum = 'K' if there exists three indices i, j and k such that i!=j, j!=k and i!=j and ARR[i] + ARR[j] + ARR[k] = 'K'.

Note:
1. You can return the list of values in any order. For example, if a valid triplet is {1, 2, -3}, then {2, -3, 1}, {-3, 2, 1} etc is also valid triplet. Also, the ordering of different triplets can be random i.e if there are more than one valid triplets, you can return them in any order.
2. The elements in the array need not be distinct.
3. If no such triplet is present in the array, then return an empty list, and the output printed for such a test case will be "-1".
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <=  50
1 <= N <= 10^3  
-10^6 <= ARR[i] <= 10^6
-10^9 <= K <= 10^9

Time Limit: 1 sec
Sample Input 1:
1
5
10 5 5 5 2
12
Sample Output 1:
5 5 2
Explanation for Sample Input 1:
5 5 2 is the only triplet that adds up to 12. 
Note that the order of the output doesn�t matter, so 5 2 5 or 2 5 5 is also acceptable.
Sample Input 2:
3
6
1 2 3 1 2 3
6
4
1 2 3 4 
11
6
1 1 2 2 1 1
4
Sample Output 2:
1 2 3
-1
1 1 2
Explanation for Sample Input 2:
In the first input, (1, 2, 3) is the only unique triplet that adds up to six.



*/

#include <bits/stdc++.h> 
#include<vector>
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	vector<vector<int>> ans;
	set<vector<int>> uniqueTriplet;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				if((arr[i]+arr[j]+arr[k])==K ){
					vector<int> temp ;
					temp.push_back(arr[i]);
					temp.push_back(arr[j]);
					temp.push_back(arr[k]);

					//it is necessory.
					sort(temp.begin(),temp.end());

					//agar uniqueTriplet mai temp nahi h to ye last element pe point larega 
					// so end == end => true : element Nahi mila.
					if(uniqueTriplet.find(temp) == uniqueTriplet.end()){
						//temp is not in uniqueTriplet 
						//agar true aata h to
							ans.push_back(temp);
							uniqueTriplet.insert(temp);
									break;
					}

		
				

				}
			}
		}
	}

	return ans;

}


//******Unique Triplet*******
//Note : The find() function returns an iterator pointing to the element 
//if it is found in the set, otherwise, 
//it returns an iterator pointing to the end of the set if the element is not found.



