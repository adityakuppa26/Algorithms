/* In mathematics, the Golomb sequence is a non-decreasing integer sequence where n-th term is equal to number of times n appears in the sequence.
The first few values are
1, 2, 2, 3, 3, 4, 4, 4, 5, 5, 5, …… 
Given a positive integer n. The task is to find the first n terms of Golomb sequence.
*/




void golomb(int n)            // prints first n numbers in the golomb sequence
{
  int dp[n+1];
  dp[1]=1;
  cout<<dp[1]<<" ";
  for(int i=1;i<n;i++)
  {
    dp[i+1]=1+dp[i+1-dp[dp[i]]];
    cout<<dp[i+1]<<" ";
  }
}
