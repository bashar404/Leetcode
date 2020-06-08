//use constant space means O(1) space
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        //if the array is empty then return 0
        //eta na likle runtime error
		if(nums.size() == 0)
            return 0;
        
        int j=0,i;  //i eknae na likle 19 number line a pabe na
        for(i=0; i<nums.size()-1; i++)
        {
            if(nums[i] != nums[i+1]) //jodi current element  next element er soman na hoy tahole add korbo
            {                        //duplicate pele last ta add korbo
                nums[j]=nums[i];     //i ke i+1 er sathe tulona korsi karon eta sorted & consecutive
                j++;
            }
        }
        nums[j]=nums[i];  //for loop a size-1 pojonto jai tai last element add na kore e ber hoye asi
        cout<<nums[j];
        return j+1;        
    }
};