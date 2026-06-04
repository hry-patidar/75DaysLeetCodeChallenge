class Solution {
public:
    int reverse(int x) {
        long long num=x;
        int sign =1;

        if(num<0){
            sign=-1;
            num=-num;
        }
         long long rev=0;
    while(num>0){
        int lastdigit=num%10;
        rev=(rev*10)+lastdigit;
        num=num/10;
         if (rev > INT_MAX || rev < INT_MIN)
                return 0;
      
    }
    return rev*sign;

    }
};