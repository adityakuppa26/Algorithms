// to check for two given strings, if one is a permutation of other


// ................first method....................

#include<iostream>
#include<algorithm>
bool isPermutation(string s1, string s2)
{
if(s1.size()!=s2.size())
return false;

sort(s1.begin(),s1.end());     // sorting both the strings
sort(s2.begin(),s2.end());

// compare the sorted strings

if(s1==s2)
return true;
else
return false;
}



// .............second method................

#include<iostream>
#include<string.h>
bool isPermutation(string s1,string s2)
{
if(s1.length()!=s2.length())
return false;

// convert string to char array

int n1=s1.length();
int n2=s2.length();
char arr1[n1+1];
char arr2[n2+1];
strcpy(arr1,s1.c_str());
strcpy(arr2,s2.c_str());
int letters[128];        // ASCII charset assumption
for(int i=0;arr1[i]!='\0';i++)
{
int val=arr1[i];
letter[val]++;
]
for(int i=0;arr2[i]!='\0';i++)
{
int val=arr2[i];
letter[val]--;
if(letter[val]<0)
return false;
}
return true;
}

// ....................third method (no extra data sructure)...............   ( assumption: string contains only small alphabets a-z )

#include<iostream>
#include<string.h>
bool isPermutation(string s1,string s2)
{
if(s1.length()!=s2.length())
return false;

// convert string to char array

int n1=s1.length();
int n2=s2.length();
char arr1[n1+1];
char arr2[n2+1];
strcpy(arr1,s1.c_str());
strcpy(arr2,s2.c_str());

int check=0;
for(int i=0;i<n1-1;i++)
{
int val=arr1[i]-'a';
check |= (1<<val);
}
for(int i=0;i<n2-1;i++)
{
int val=arr2[i]-'a';
check = check ^ (1<<val);
]
if ( check > 0)
return false;
else
return true;
}
