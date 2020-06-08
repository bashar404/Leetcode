class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        //jodi string e kichu na thake tahole null return korbe
       
        if(strs.size()==0)
            return "";
        // if(strs.size()==0 || strs==NULL)
         //You cannot assign NULL or 0 to a C++ std::string object, because the object is not a pointer. This is one key difference from C-style strings; a C-style string can either be NULL or a valid string, whereas C++ std::strings always store some value.

        
        //jodi string e kichu thake tahole prothome strs[0] mane flower k sobche boro
        //string hisebe dore nibo tarpor etar sathe bakigular compare korbo
        string longestCommonPrefix=strs[0];
        
        for(int i=0; i<strs.size(); i++)  //EX-1&2 te strs.size() holo 2
        {
            string currentString=strs[i];
            int j=0;
            while(j<longestCommonPrefix.size() && j<currentString.size() && longestCommonPrefix[j]==currentString[j])
            //while(j<longestCommonPrefix.size() && j<currentString.size() && longestCommonPrefix.at(j)==currentString.at(j))
            {
                j++;
            }
            if(j==0)
                return "";
            else
            {
                longestCommonPrefix=longestCommonPrefix.substr(0,j);
            }
        }
    return longestCommonPrefix;
 
    }
};
  // std::string str="My name is golam";
  //std::string str2 = str.substr (11,5);     // "golam"
  //starts at character position pos and spans len characters
  //std::cout << str2;
