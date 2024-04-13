//optimize solution of que 35
#include <bits/stdc++.h> 
#include<vector>
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	
	vector<vector<int>> ans;
    sort(arr.begin(), arr.end()); // Sort the array to handle duplicates efficiently
    
    for(int i = 0; i < n - 2; ++i) {
        if (i == 0 || (i > 0 && arr[i] != arr[i-1])) { // Skip duplicates
            int left = i + 1, right = n - 1;
            while (left < right) {
                int sum = arr[i] + arr[left] + arr[right];
                if (sum == K) {
                    ans.push_back({arr[i], arr[left], arr[right]});
                    // Skip duplicates
                    while (left < right && arr[left] == arr[left + 1]) left++;
                    while (left < right && arr[right] == arr[right - 1]) right--;
                    left++;
                    right--;
                } else if (sum < K) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }
    return ans;		
	

}
