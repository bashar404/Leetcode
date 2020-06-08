class Solution {
public:
  int romanToInt(string s) 
  {
      //map is a key-value pair
      //map are used to replicate associative array. 
      //array 2 prokar-numeric & associative.
      //numeric: int a[5]; index no janle access kora jay
      //associative: nam (key) dile k koto (value) paise jana jay. C/C++ a eta <map> class er sahajje access kora hoy. each key (nam) should be unique. data (value) change hote parbe kintu index (key jeta nam) seta change kora jabe na.
      //shudu ki string ba char associative array te key mane index hisebe thakte pare? NO, 100,123 o thakte pare kintu obbosoi sorted order hote hobe
      //property: Map always arrange its key in sorted order
       map<char,int>myMap
       {
           {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
       };
//ekane object bananor somoy e okane value assign korsi, char er jonno ' '
      int ans=0;
      for(int i=0;i<s.size();i++)
      {
        ans=ans+myMap[s[i]];
        if(i>0 && myMap[s[i]]>myMap[s[i-1]])
            ans=ans-2*myMap[s[i-1]];
      }
      return ans;
  }
};



//map<char, int> m{{'I', 1}, {'V', 5}, 
    //                  {'X', 10}, {'L', 50},
    //                  {'C', 100}, {'D', 500},
    //                  {'M', 1000}};
    // int ans = 0;
    // for (int i = 0; i < s.length(); i++)
    // {
    //   ans = ans + m[s[i]];
    //   if (i > 0 && m[s[i]] > m[s[i - 1]])
    //     ans =ans- 2 * m[s[i - 1]];
    // }
    // return ans;


//  map<char,int>myMap
//       {
//           {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000},  
//       };
//       int ans=0;
//       for(int i=0;i<s.size();i++)
//       {
//           ans=ans+myMap[s[i]];
//           if(i>0 && myMap[s[i]]>myMap[s[i-1]])
//               ans=ans-2*myMap[s[i-1]];
//       }
//      return ans; 