// Used nested ternary for finding lowercase,uppercase and numbers.
#include <iostream>
using namespace std;
int main() {
    char ch;
    string val;
    cin>>ch;
    
    val = (ch>='a' && ch<='z')?"lowercase":(ch>='A' && ch<='Z')?"uppercase":(ch>='0' && ch<='9')?"number":"DEFAULT" ;
      cout<<val;
    return 0;
}
