int Knapsack(int W,int w[],int val[], int n)            // W is the total weight of bag
{                                                       // n is the total no. of items
  int K[n+1][W+1];                                      // w[] contains the weights of the items
  for(int i=0;i<=n;i++)                                 // val[] contains the values or costs of the items
  {
    for(int j=0;j<=W;j++)
    {
      if(i==0 || j==0)
      {
        K[i][j]=0;
      }
      
      else if(w[i] <= j)
      {
        K[i][j]=max(val[i-1] + K[i-1][j-w[i-1]] , K[i-1][j]);
      }
      else
      {
        K[i][j]=K[i-1][j];
      }
    }
  }
  return K[n][W];
}
