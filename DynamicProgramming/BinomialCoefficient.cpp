/* Write a function that takes two parameters n and k and returns the value of Binomial Coefficient C(n, k). For example, your function should return 6 for n = 4 and k = 2, and it should return 10 for n = 5 and k = 2. */

int min(int a, int b)
{
    return (a<b)? a: b;
}
 

int binomial(int n, int k)
{
  int temp[n+1][k+1];
  for(int i=0;i<=n;i++)
  {
    for(int j=0;j<=min(i,k);j++)
    {
      if(j==0 || j==i)
        temp[i][j]=1;
      else
        temp[i][j]=temp[i-1][j-1] + temp[i-1][j];
    }
  }
  return temp[n][k];
}
