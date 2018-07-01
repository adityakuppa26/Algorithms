/* Given a rod of length n inches and an array of prices that contains prices of all pieces of size smaller than n. Determine the maximum value obtainable by cutting up the rod and selling the pieces. */

int rodcut(int price[], int l)
{
  int 1,j;
  int values[n+1];
  values[0]=1;
  for(i=1;i<=n;i++)
  {
    int max_values=INT_MIN;
    for(j=0;j<i;j++)
    {
      max_value=max(max_value,price[j]+values[i-j-1]);
    }
    values[i]=max_value;
  }
  return values[n];
}
