class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums)
    {
      //consider the edge case
        if(nums.size()<=1)
            return {nums};        //return type vector<vector<>> that's why put {}  
         vector<vector<int>>result;
        for(int i=0; i<nums.size();i++)
        {
    
        vector<int>v(nums.begin(), nums.end()); //copy nums to a vector bcz we will erase the first element at begining and recursively call permute() for the rest of elements
        v.erase(v.begin()+i);  // i because we will erase the first number in each iteration
        auto res=permute(v);
        
        
            for(int j=0; j<res.size();j++)
            {
            vector<int>v1=res[j];
            v1.insert(v1.begin(),nums[i]);
            result.push_back(v1);
            }
            
        }  
        return result;
    }
};


































// class Solution 
// {
// public:
//     vector<vector<int>> permute(vector<int>& nums) 
//     {
//         sort(nums.begin(),nums.end());
//         vector<vector<int>>ans;
//         int n = nums.size();
//         do
//         {
//                 vector<int>v1;
//                 for(int j=0;j<n;j++)
//                 {
//                     v1.push_back(nums[j]);
//                 }
//                 ans.push_back(v1);
            
//         } while(next_permutation(nums.begin(),nums.end()));
        
        
//         return ans;
//     }
// };
// /*
// #include <algorithm> 
// template: 
//             bool next_permutation ( BidirectionalIterator first, BidirectionalIterator last );
// Parameters: 
//             first, last : Bidirectional iterators to the initial and final positions of the sequence.
// Return value:
//                 true if the new permutation is lexicographically greater than the old. false if the last permutation was reached and the range was reset to the first permutation.
                    
// #include<algorithm>
// #include <iostream>

// using namespace std;

// int main()
// {
//     int a[3]={1,2,3};
//     do{
//        cout<<"\n"<<a[0]<<a[1] <<a[2]; 
//       }while(next_permutation(a,a+3));
//     return 0;
// }
// */


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
