class Solution {
public:
    int reverse(int x) 
    {
        int r;
        long long sum=0;
        while(x)
        {
            r=x%10; //3,2,1
            sum=sum*10+r;
            x=x/10; //12,1
        }
        return (sum>INT_MAX || sum<INT_MIN)?0:sum;
    }
};