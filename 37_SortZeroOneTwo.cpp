#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int s = 0;
    int mid = 0;
    int e = n - 1;
    
    while(mid <= e) {
        if(arr[mid] == 0) {
            swap(arr[s], arr[mid]);
            s++;
            mid++;
        }
        else if(arr[mid] == 1) {
            mid++;
        }
        else { // arr[mid] == 2
            swap(arr[mid], arr[e]);
            e--;
        }
    }
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

