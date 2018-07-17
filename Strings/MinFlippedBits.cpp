/* Given a string containing 0’s and 1’s. The task is to find out minimum number of bits to be flipped such that 0’s and 1’s will be alternative.  */
#include <iostream>
#include<string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int count=0;
	    if(s.length()==1)
	        cout<<1<<endl;
	    else
	    {
	        string temp="";
	        string flag="1";
	        int siz=s.length();
	        while(siz--)
	        {
	            temp += flag;
	            if(flag=="0")
	                flag="1";
	            else
	                flag="0";
	        }
	        for(int i=0;i<s.length();i++)
	        {
	           if(s[i]==temp[i])
	            count++;
	        }
	        int y=s.length()-count;
	        int m=(count<y)?count:y;
	        cout<<m<<endl;
	    }
	}
	return 0;
}
