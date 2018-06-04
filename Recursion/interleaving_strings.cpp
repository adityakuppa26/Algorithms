void interleaving(char* s1, char* s2, char*res, int l1, int l2, int index)      // l1 and l2 are lengths of strings s1 and s2 resp.
{                                                                               // res is the interleaved string
  if(l1==0 && l2==0)
  {
    cout<<res;
    return;
  }
  if(l1 != 0)
  {
    res[index]=s1[0];
    interleaving(s1+1,s2,res,l1-1,l2,index+1);
  }
  if(l2 != 0)
  {
    res[index]=s2[0];
    interleaving(s1,s2+1,res,l1,l2-1,index+1);
  }
}
