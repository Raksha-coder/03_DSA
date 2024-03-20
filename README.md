# DSA


## Array
- we can make array of char,int,float,double,bool
double num[5];
int num[5];
char num[5];
bool num[5];

find size of sizeof(array)/sizeof(int);


warning : 
do not take variable as size and initialize it as array size,
like int arrayname[size];

Good Practice : rather than doing this write direct value , int arrayname[10000];


in case of function: if we pass array in a function, it will act as pointer
because array it'self store it's first element address in it.
but in case of variable it does not act as pointer.


## garbage value
