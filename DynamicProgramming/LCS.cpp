/* LCS Problem Statement: Given two sequences, find the length of longest subsequence present in both of them. A subsequence is a sequence that appears in the same relative order, but not necessarily contiguous. For example, “abc”, “abg”, “bdf”, “aeg”, ‘”acefg”, .. etc are subsequences of “abcdefg”. */

int max(int a, int b)
{
    return (a > b)? a : b;
}

int lcs ( char* s1, char* s2, int n, int m)
{
  int L[n+1][m+1];
  for(int i=0;i<=n;i++)
  {
    for(int j=0;j<=m;j++)
    {
      if(i==0 || j==0)
      {
        L[i][j]=0;
      }
      else if( s1[i-1]==s2[j-1] )
        L[i][j]=1+L[i-1][j-1];
      else
        L[i][j]=max(L[i-1][j],L[i][j-1]);
    }
  }
  return L[n][m];
}
