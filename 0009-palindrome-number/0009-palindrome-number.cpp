class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
    long long rev=0;
    if(x<0){
        return false;
    }
    while(x>0){
        int lastdigit=x%10;
        
        rev =(rev*10)+lastdigit;
        x=x/10;
    }
return rev ==num;
    }
};