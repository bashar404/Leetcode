class Solution {
public:
    bool isValid(string s) 
    {
        stack<char>myStack;
        
        if(s.size()==0)
            return 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                myStack.push(s[i]);
            else if(s[i]==']' and myStack.top()=='[')
                myStack.pop();
            else if(s[i]=='}' and myStack.top()=='{')
                myStack.pop();
            else if(s[i]==')' and myStack.top()=='(')
                myStack.pop();
            else
                myStack.push(s[i]);
        }
        
    if(myStack.size()==0)
        return true;
    return false;
    }
};

  // stack<char> st;
	   //  for (int i=0;i<s.size();i++)
	   // {
	   //     if (st.empty()) //(
	   // st.push(s[i]);
	   //     else if (s[i]=='(' || s[i]=='{' || s[i]=='[') 
	   // st.push(s[i]);
	   //     else if (s[i]==')' && st.top()=='(') 
	   // st.pop();
	   //     else if (s[i]=='}' && st.top()=='{') 
	   // st.pop();
	   //     else if (s[i]==']' && st.top()=='[') 
	   // st.pop();
	   //     else st.push(s[i]);
	   // }
	   // if (st.size()==0) 
	   // return true;
	  // return false;