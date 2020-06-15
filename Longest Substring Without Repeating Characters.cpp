class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_set<char>uset;         //unordered_set a jai insert korbo sob shudu UNIQUE   
        int i=0,j=0,result=0;
//I/P:abcabcbb
//Suru te i & j ke prothom char a rakbo mane i&j=0, tarpor j ke agay nia jabo, i ke okane e rakbo 
//j agay nibo & check korbo j present char ta uset a ase kina, jodi na thake tahole insert korbo
//ar thakle uset theke i ke erase korbo and i next char k point korbe https://www.youtube.com/watch?v=3IETreEybaA
        while(j < s.size())
        {
            if( uset.find(s.at(j)) == uset.end() )  //end():It returns an iterator pointing to the past-the-end     //find():if the specified value is found taile oi element er itreator(pointer) patabe,  else end() if it is not found in the container.                                                 
            {
                uset.insert(s.at(j));
                j++;
                result=max((int)uset.size(),result ); //// result=max(result ,(int)uset.size() ); //typecast must
            }                                          //****ekane uset.size()***** 
            else
            {
                uset.erase(s.at(i)); //abca ekane ese a ke peye surur a ke erase korbe and bca darabe
                i++;
            }
        }
        return result;
    }
};

//some details whicih can help the beginers
#include<iostream>
#include<string>
#include<typeinfo>
#include<unordered_set>
#include<set>
#include<typeinfo>
using namespace std;
class A{};
int main()

{
    //set a jai insert korbo sob SORTED ORDER & UNIQUE   
  set<int>uset1;
  uset1.insert(2);
  uset1.insert(1);
  uset1.insert(3);
  uset1.insert(1);
  uset1.insert(3);
  for(auto i=uset1.begin(); i!=uset1.end(); i++) //auto keyword used for type deduction
        cout<<*i; //i is a pointer value  //123
 cout<<"\n";       
    
       //unordered_set a jai insert korbo sob shudu UNIQUE   
  unordered_set<int>uset21;
  uset21.insert(2);
  uset21.insert(1);
  uset21.insert(3);
  uset21.insert(1);  //already exist tai add hobe na
  uset21.insert(3);  //already exist tai add hobe na
  for(auto i=uset21.begin(); i!=uset21.end(); i++)
        cout<<*i;           //321  no difference when you don't know what the order of the elements
cout<<"\n"; 
    
   unordered_set<int>uset={2,1,4,3,3,1,2,3,4};
   for(auto i=uset.begin(); i != uset.end(); ++i)
        cout<<*i;  //3412
        
//cout<<"\nErase & Find"<<endl;
//erase & find
  uset.erase(uset.find(2));
  
  for(auto i=uset.begin(); i!=uset.end(); i++)
        cout<<*i; //341
    cout<<"\n";  
 
//insert         
   uset.insert(2);
   uset.insert(2);
   uset.insert(5);

for(auto i=uset.begin(); i!=uset.end(); i++)
        cout<<*i; //5321

    cout<<"\n"; 
    
//information about auto keyword: It detects based on what input is
//then convert that to that type 
    auto i=10;
    auto d=10.5;
    auto s=i+d;
    cout<<s<<endl;  //20.5
    
    auto a=A();
    
    cout<<typeid(i).name()<<endl; // i which stands for integer
    cout<<typeid(d).name()<<endl; // d which stands for double
    std::cout<<typeid(s).name()<<std::endl; // d which stands for double
    cout<<typeid(a).name()<<endl; //1A
    
    system("pause");
    return 0;
}
*/