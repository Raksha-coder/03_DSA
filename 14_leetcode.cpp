//leetcode
//compliment of base 10

/*
first we will create a mask 
example : 5 = 00000101
         mask=00000111
         
         ~5 = 11111010
    & mask  = 00000111  
    
    ANS = 2

*/

    int bitwiseComplement(int n) {
      


        int m = n;
        int mask = 0;
        if(n == 0)
            return 1;

        while(m!=0){
            mask = (mask<<1) | 1;
            m = m >>1;
        }

        int ans = (~n) & mask;

          
  
        return ans;
}
};
