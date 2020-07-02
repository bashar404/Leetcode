class Solution 
{
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        int R=board.size(); //Row size
        int C=board.size(); //Column size //important
        unordered_set<string>uset; //to avoid duplicate values
        
        for(int i=0;i<R;i++)
        {
            for(int j=0;j<C;j++)
            {
                if(board[i][j]=='.') 
                    continue;
                // initialization by character with number of occurrence 
                string ch(1,board[i][j]); //current cell/element holo board[i][j]; eta kotobar ase 1 bar
                string row = "(" + to_string(i) + ")" + ch; //(0)5 ,Convert numerical value to string
                string column = ch + "(" + to_string(j) + ")"; //3(2)
                //evabe liklam jatr column and row er insert distinguish korte pari
                
                string box= "(" + to_string(i/3) + ch + to_string(j/3) + ")";
                //first box er 8 likbe (080)  
                //by this way we can differentiate R,C and box
                
                if( uset.find(row) != uset.end() || uset.find(column) != uset.end() || uset.find(box) != uset.end())
                    return false;
                else
                {
                    uset.insert(row);
                    uset.insert(column);
                    uset.insert(box);
                }
            }
        }
        return true;
    }
};


/*
//C++ string class
// C++ program to demonstrate various function string class 
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // various constructor of string class 
  
    // initialization by raw string 
    string str1("first string"); 
  
    // initialization by another string 
    string str2(str1); 
  
    // initialization by character with number of occurrence 
    string str3(5, '#'); 
  
    // initialization by part of another string 
    string str4(str1, 6, 6); //    from 6th index (second parameter) 
                             // 6 characters (third parameter) 
  
    // initialization by part of another string : iteartor version 
    string str5(str2.begin(), str2.begin() + 3); 
  
    cout << str1 << endl; 
    cout << str2 << endl; 
    cout << str3 << endl; 
    cout << str4 << endl; 
    cout << str5 << endl; 
     //  assignment operator 
    string str6 = str4; 
  
    // clear function deletes all character from string 
    str4.clear(); 
  
    //  both size() and length() return length of string and 
    //  they work as synonyms 
    int len = str1.size(); // Same as "len = str1.size();" 
  
    cout << "Length of string is : " << len << endl; 
  
    // a particular character can be accessed using at / 
    // [] operator 
    char ch = str1.at(2); //  Same as "ch = str1[2];" 
  
  
    cout << "third character of string is : " << ch << endl; 
    
    //  front return first character and back returns last character 
    //  of string 
  
    char ch_f = str1.front();  // Same as "ch_f = str1[0];" 
    char ch_b = str1.back();   // Same as below 
                               // "ch_b = str1[str6.length() - 1];" 
  
    cout << "First char is : " << ch_f << ", Last char is : "
         << ch_b << endl; 
  
  //append
  str1.append(" as C++ developer");
  cout<<"\n"<<str1;
  
  //erase
  str1.erase(13,20);
cout<<"\n"<<str1;
    
}
*/

/*
https://www.youtube.com/watch?v=ADAq2TBP5PY&t=612s
first string                                                             
first string                                                             
#####                                                                    
string                                                                   
fir                                                                      
Length of string is : 12                                                 
third character of string is : r                                         
First char is : f, Last char is : g   
first string as C++ developer                                            
first string   
*/