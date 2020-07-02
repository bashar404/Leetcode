class Solution 
{
public:
    
    double myPow(double x, int n) 
    {
       if(x==1 || n==0)
        return 1;
        
       double temp=myPow(x,n/2);  //divide & conqure
       //if 2^16
       if(n%2==0)
           return temp*temp;  //2^8 * 2^8
       else if(n>0)
           return x*temp*temp; //if 2^15= 2 * 2^7 * 2^7
       else
           return 1/x*temp*temp;
    }
};