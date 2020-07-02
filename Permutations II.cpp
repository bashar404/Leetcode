class Solution 
{
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        do{
            vector<int>v1;
            for(int i=0; i<nums.size();i++)
                v1.push_back(nums[i]);
            ans.push_back(v1);
            
        }while(next_permutation (nums.begin(),nums.end()) );
        
        return ans;
    }
};