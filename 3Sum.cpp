class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr)
    {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
		//We will use this set to avoid duplicates
        set<vector<int>>s;
        int n = arr.size();
		//Loop through all elements one by one till the third last element
        for (int i = 0; i < n - 2; i++)
        {
            if(arr[0]>0)
                break;
            int val = arr[i];  // The Current element
			int l = i + 1;   // set left pointer
			int r = n - 1;   // set the right pointer
			//Iterate till l and r cross each other
            while (l < r)
            {
                int csum = val + arr[l] + arr[r]; //The current sum of all three elements
                if (csum == 0){
					// if sum is equal to zero add to the set
                    s.insert({val,arr[l],arr[r--]}); //insert(ele) : This function inserts the element in set. The insertion only takes place when the element passed is not already in set
                }
                else if (csum < 0) {
				// If sum is less than zero that means we need a larger number to be close to zero so we should increment left pointer as the array is sorted and so the next element will be larger
                    l++;
                }else{
				// If sum is greater than zero that means we need a smaller number to be close to zero so we should decrement right pointer as the array is sorted and so the next element will be smaller.
                    r--;
                }
            }
        }
		//Add all elements from the set to ans array
        for(auto i: s) 
        {
            ans.push_back(i);
        }
         // Iterating over whole array 
         
         vector<int> v = {0, 10, 20, 3, 4, 5}; 
          for (auto i : v) 
                cout << i << ' '; 
        
       
        return ans;
    }
};

//SOLUTION USING TWO POINTERS
/*
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
     sort(nums.begin(),nums.end());   
     set <vector<int>>s; //to avoid duplicate value 
     vector<vector<int>>ans;
       for(int i=0; i<nums.size()-2; i++) //Loop through all elements one by one till the third last element
       {
           if(nums[i]>0)  //after sorting if first number>0 no solution
               break;
        int value=nums[i];          //THE VALUE OF CURRENT ELEMENT
        int left=i+1;               //SET THE LEFT POINTER INDICATING INDEX NOT VALUE
        int right=nums.size()-1;    //SET THE RIGHT POINTER INDICATING INDEX NOT VALUE
           while(left<right)        ////Iterate till lEFT and RIGHT cross each other
           {
               int current_sum=value+nums[left]+nums[right];
                if(current_sum<0)// If sum is less than zero that means we need a larger number to be close to zero so we should increment left pointer as the array is sorted and so the next element will be larger
                        left++;
                if(current_sum==0)
                   {
                        s.insert( {value,nums[left],nums[right]} ); ////insert( {ele1,ele2,el3} ) : This function inserts the element in set. The insertion only takes place when the element passed is not already in set
                        left++;  //Due to match found we can increase the left by one
                        right--; //and decrease right by one
                   }
                if(current_sum>0)
                        right--;  //As it sorted from small to large. // If sum is greater than zero that means we need a smaller number to be close to zero so we should decrement right pointer as the array is sorted and so the next element will be smaller.       
           }        
       }
        for(auto x:s)
                   ans.push_back(x);
                                        // Iterating over whole array 
                                         /*
                                         //vector<int> v = {0, 1, 2, 3, 4, 5}; 
                                          //for (auto i : v) 
                                            //    cout << i << ' '; 
                                               
       return ans; 
    }
};
*/


