class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        vector<vector<int>>res;
        if(inter.size()==0)
            return res;
        vector<int>temp=inter[0];
        for(auto it:inter)
        {
            if(it[0]<=temp[1])
                temp[1]=max(it[1],temp[1]);
            else
            {
                res.push_back(temp);
                temp=it;
            }
        }
        res.push_back(temp);
        return res;
    }
};
