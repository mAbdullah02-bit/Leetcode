class Solution {
public:
    bool isPalindrome(int x) {
    if(x<0)return false;
    long long num=0;
    int z=x;
    while(x!=0){
 int y=x%10;
x/=10;
 num=num*10+y;
    }


return num==z;
    }
};