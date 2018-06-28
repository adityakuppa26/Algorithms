/* Given a value N, if we want to make change for N cents, and we have infinite supply of each of S = { S1, S2, .. , Sm} valued coins, how many ways can we make the change? The order of coins doesn’t matter. */

int change(int S[], int m, int n)
{
  int table[n+1][m];
  for(int i=0;i<m;i++)
  {
    table[0][i]=1;
  }
  for(int i=1;i<=n;i++)
  {
    for(int j=0;j<m;j++)
    {
      int x= (i-S[j] >= 0) ? table[i-S[j]][j] : 0;
      int y= (j>=0) ? table[i][j-1] : 0;
      table[i][j]=x+y;
    }
  }
  return table[n][m-1];
}
