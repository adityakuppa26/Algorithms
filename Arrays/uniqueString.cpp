// check if a given string contains all unique characters

bool isUnique(String str)
{
  if(strlen(str)>128)
  {                          
    return false;
  }
  bool seen[128];           // assuming the charset to be standard ASCII
  memset(seen,false,128);
  for(int i=0;i<strlen(str)-1;i++)
  {
    int val=str[i];
    if(seen[val])
    {
      return false;
    }
    seen[val]=1;
  }
  return true;
}


// the storage space can further be reduced by a factor of eight as 

bool isUnique(String str)
{
int check=0;
for(int i=0;i<strlen(str)-1;i++)
{
int val=str[i]-'a';         // assuming that the string contains only small alphabets a-z
if(( check & (1<<val)) > 0)
return false;
check |= (1<<val);
}
return true;
}

