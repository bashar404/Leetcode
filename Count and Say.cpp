string result (string s)
{
    int count=1;  //ekane ashse mane e min 1 bar hoileo occurance hoise
    stringstream ss;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==s[i+1])  //jokon kono string sesh hoye jabe (test_case 2) s[1] holo 1 ae s[2]=NULL
            count++;
        else
        {
            ss<<count<<s[i]; //jodi n=2 ditam,taile ekane count a 1 ar s[i] a 1 hoto
            count=1;        //ekane count abar 1 dilam karon test case 5 a prothom 3 ta 1 er jonno count 3 hoisilo
                            //kintu string tokono sesh hoynai, tai abar 1 a nia ashlam
        }
    }
    return ss.str();
}
/**************************stringstream ************************/
//operator << : This will add one string into the stringstream
//str(): To get and set the string object whose content is present in stream
/* #include<iostream>
   #include<sstream>
   using namespace std;
   main()
   {
   stringstream ss;
   ss << 1 << 6;
   cout <<ss.str();
   }
   O/P:16
*/

class Solution 
{
public:
    string countAndSay(int n) 
    {
     if(n==1)   
         return "1"; //string hisebe "1" return korbe
    else
        return result(countAndSay(n-1)); //jotoi dek na ken 1 1 kore kombe and seshe (n-1)=(2-1)="1" theke suru
    }
};

//1
//11=count(1),string //depends on previous string
//21   ager string a 1 koyta--> 1 ta, kon sonkha--1
//1211  ''    ''     2  ''  --> 1 '',  ''   ''  --2, erpor 1 ta 1 
//111221
