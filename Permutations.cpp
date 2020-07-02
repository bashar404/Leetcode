class Solution 
{
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n = nums.size();
        do
        {
                vector<int>v1;
                for(int j=0;j<n;j++)
                {
                    v1.push_back(nums[j]);
                }
                ans.push_back(v1);
            
        } while(next_permutation(nums.begin(),nums.end()));
        
        
        return ans;
    }
};
/*
#include <algorithm> 
template: 
            bool next_permutation ( BidirectionalIterator first, BidirectionalIterator last );
Parameters: 
            first, last : Bidirectional iterators to the initial and final positions of the sequence.
Return value:
                true if the new permutation is lexicographically greater than the old. false if the last permutation was reached and the range was reset to the first permutation.
                    
#include<algorithm>
#include <iostream>

using namespace std;

int main()
{
    int a[3]={1,2,3};
    do{
       cout<<"\n"<<a[0]<<a[1] <<a[2]; 
      }while(next_permutation(a,a+3));
    return 0;
}
*/