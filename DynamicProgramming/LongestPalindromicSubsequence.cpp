/* Given a sequence, find the length of the longest palindromic subsequence in it.As another example, if the given sequence is “BBABCBCAB”, then the output should be 7 as “BABCBAB” is the longest palindromic subseuqnce in it.  */

int palinseq(char* str)
{
  int n =strlen(str);
  int i,j;
  int table[n][n];
  for(i=0;i<n;i++)
  {
    table[i][i]=1;
  }
  
 for(j=2;j<=n;j++)
 {
  for(i=0;i<n-j+1;i++)
  {
    int k=i+j-1;
    if(str[i]==str[k] && j==2)
    {
      table[i][k]=2;
    }
    else if(str[i]==str[k])
    {
      table[i][k]=table[i+1][k-1]+2;
    }
    else
    {
      table[i][k]=max(table[i+1][k],table[i,k-1]);
    }
  }
 }
 return table[0][n-1];
}
