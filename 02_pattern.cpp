/*
1234554321
2345**5432
345****543
45******54
5********5
*/

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        
       for(int j=i;j<=n;j++){
           cout<<j;
       }
       
       //spacing
       int space = 2*i;
       for(int j=space;j>2;j--){
           cout<<"*";
       }
       
        for(int j=n;j>=i;j--){
           cout<<j;
       }
       cout<<endl;
       
    }

    return 0;
}
