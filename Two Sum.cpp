class Solution 
{
public:
    
    
    vector<int> twoSum(vector<int>& nums, int target) 
    {
      map<int,int>myMap;
      vector<int>arr(2);
        for(int i=0;i<nums.size();i++)
        {
         myMap[nums[i]]=i;   
        }

        
        for(int i=0;i<nums.size();i++)
        {
            int compare=target-nums[i];
            if(myMap[compare]!=i && myMap[compare])
            {
                arr[0]=i;
                arr[1]=myMap[compare];
            }
        } 
        return arr;
    }
};



//   vector<int> arr(2);
//       map<int,int>myMap;
//         //2=0,7=1,11=2,15=3
//         for(int i=0; i<nums.size(); i++)
//             myMap[nums[i]]=i;
//         for(int i=0; i<nums.size(); i++)
//         {
//             int compare=target-nums[i];
//             //jodi ei compare myMap e thake & onno index hoy
//             if(myMap[compare] && myMap[compare] != i)
//             {
//                 arr[0]=i;
//                 arr[1]=myMap[compare];
//             }
//         }
//         return arr;    