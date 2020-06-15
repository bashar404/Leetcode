/* I/P:GOLAMBASH, numRows=3
G   M   H
O A B S
L   A
Jei koyta numRows thakbe sei koyta string res[numRows] nibo

|_______|    |_______|     |_______|
   res0         res1          res2
Seshe ae res gulo jog kore result dibo 
ekta for loop chalabo jeta given string er size pojonoto cholbe
G->0, O->1, L->2, A->1, M->0 ... scan korbo and push_back korbo jei res a porbe
suru G->0 (int i=0) theke down (ch='d') ae jete takbo and +1 kore barabo jokon numRows-1 mane (3-1)=2 a pouchabe tokon -1 komate takbo (ch='u'). Abar 0 te pouchale +1 korbo until numRows-1 mane (3-1)=2 a pouchabe and so on.
0 G |   | 0 M |   | 0 H
1 O |1 A| 1 B |1 S|
2 L |   | 2 A |

|_GMH__|    |__OABS_|     |___LA__|
  res0         res1          res2

Edge case: Jodi numRows 1 hoy taile jeta s takbe setai return korbe
*/
class Solution {
public:
    string convert(string s, int numRows) 
    {
        int i=0;
        string res[numRows];
        char ch='d';  //suru theke down er dike jete thake tai d assign korlam
        if(numRows==1)
            return s;
        for(int j=0; j<s.size(); j++)
        {
            res[i].push_back(s[j]); //Adds a new element at the end of the vector, after its current last element.
            if(i==numRows-1)
                ch='u';
            if(i==0)
                ch='d';
            ch=='d'?i++:i--; 
        }
        string result="";
        for(int k=0; k<numRows; k++)
            result=result+res[k];
        return result;
    }
};
