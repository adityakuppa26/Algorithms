#include <iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int flag=1;
	    stack<char> stk;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]=='[' || s[i]=='(' || s[i]=='{'){
	            stk.push(s[i]);
	            continue;
	        }
	        if( stk.empty())
	        {
	            flag=0;
	            break;
	        }
	        else if (s[i]==']' && stk.top()=='[')
	        {
	            stk.pop();
	        }
	        else if (s[i]==')' && stk.top()=='(')
	        {
	            stk.pop();
	        }
	        else if (s[i]=='}' && stk.top()=='{')
	        {
	            stk.pop();
	        }
	        else
	            break;
	    }
	    if(stk.empty() && flag!=0)
	        cout<<"balanced"<<endl;
	    else
	        cout<<"not balanced"<<endl;
	    
	}
	return 0;
}
