class Solution 
{
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        int n=nums.size();
        if (n==0) 
            return 1;
        
        //sort the vector to traverse the vector
        sort(nums.begin(), nums.end());
        
         for(int i=1;i<INT_MAX;i++) //traverse till Value of INT_MAX is +2147483647.
        {
            auto it=find(nums.begin(), nums.end(),i);
            if(it==nums.end()) //If not found return the value of i, ex: 1,3,4
                return i;
        
        }
        return *nums.end()+1;  //nums.back()+1  //if all present return the value after final value
    }
};

