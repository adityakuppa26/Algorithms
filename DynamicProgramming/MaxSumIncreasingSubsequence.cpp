/* Given an array of n positive integers. Write a program to find the sum of maximum sum subsequence of the given array such that the intgers in the subsequence are sorted in increasing order. For example, if input is {1, 101, 2, 3, 100, 4, 5}, then output should be 106 (1 + 2 + 3 + 100), if the input array is {3, 4, 5, 10}, then output should be 22 (3 + 4 + 5 + 10) and if the input array is {10, 5, 4, 3}, then output should be 10  */


int sumseq(int arr[], int n)
{
  int max[n];
  for(int i=0;i<n;i++)
  {
    max[i]=arr[i];
  }
  int i,j,ms=0;
  for(i=1;i<n;i++)
  {
    for(j=0;j<i;j++)
    {
      if(arr[i]>arr[j] && max[i] < max[j]+arr[i])
      {
        max[i]=max[j]+arr[i];
      }
    }
  }
  for(i=0;i<n;i++)
  {
    if(ms<max[i])
      ms=max[i];
  }
  return ms;
}
