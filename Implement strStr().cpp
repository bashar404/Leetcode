class Solution
{
public:
    int strStr(string haystack, string needle) 
    {
        string h=haystack ;
        string n=needle;
        
        if(h.size()==0)
        {
            if(n.size()==0)
                return 0;
            return -1;
        }
        if(h.size()==1 && n.size()==0)
            return 0;
        if(h.size()<n.size())
            return -1;
        for(int i=0; i<h.size()-n.size()+1; i++)
        {
            int j;
            for(j=0;j<n.size();j++)
            {
                 if(h[i+j]!=n[j])
                     break;
            }
            if(j==n.size())
                return i;
        }
        return -1; 
        
    
    }
 };

//         string h=haystack;
//         string n=needle;
//         if(h.size()==0)
//         {
//             if(n.size()==0)
//                 return 0;
//             return -1;
//         }
//         if(h.size()>0 && n.size()==0)
//             return 0;
//         if(h.size()<n.size())
//             return -1;
        
//             for(int i=0; i<h.size()-n.size()+1; i++)
//             {
//                 int j;
//                 for(j=0; j<n.size(); j++)
//                 {
//                     if(h[i+j] != n.at(j))
//                         break;
//                 }
//                 if(j==n.size())
//                     return i;
//             }
//         return -1;