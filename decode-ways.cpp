class Solution {
public:
    int numDecodings(string s) 
    {
        int n=s.size();
      
        
        if(s[0]=='0' or n==0)  //first char 0 means invalid or total size 0 means nothing is there means invalid
            return 0;
        if(n==1)             //if there is only one digit means only one solution is available
            return 1;
      
    
      
        
        int counter_1=1;
        int counter_2=1;   //if last two digit belongs from 10 to 26
        
        for(int i=1; i<s.size(); i++)             //starting from second position as we consider the first position
        {
            int current_digit = s[i]-'0';     //current char to int
            int current_prev_digit= (s[i-1]-'0')*10 + current_digit; //multiply by 10 and then add current digit to get the last two char as one digit
            int count=0;    
            
            if(current_digit>0 and current_digit<10)
                count=count+counter_2;
            if(current_prev_digit>9 and current_prev_digit<27)
                count=count+counter_1;
             counter_1=counter_2;  //tricky part
             counter_2=count;      //tricky part
        }
        return counter_2;
    }
};
