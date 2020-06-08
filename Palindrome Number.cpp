class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int r;
        long long sum=0;
        int old=x;
        while(x) 
        {
            r=x%10;//1,2,1
            sum=sum*10+r;//1,12,121
            x=x/10;//12,1,
        }

        return (old==sum)?true:false;
    }
};