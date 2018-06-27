/* The Longest Increasing Subsequence (LIS) problem is to find the length of the longest subsequence of a given sequence such that all elements of the subsequence are sorted in increasing order. For example, the length of LIS for {10, 22, 9, 33, 21, 50, 41, 60, 80} is 6 and LIS is {10, 22, 33, 50, 60, 80}. */
  
int lis(int arr[], int n)     // n is he size of the array arr[]
{
  int* lis=new int(n);
  int max=0;
  for(int i=0;i<n;i++)
  {
    lis[i]=1;
  }
  for(int i=1;i<n;i++)
  {
    for(int j=0;j<i;j++)
    {
      if( ( arr[i] > arr[j] ) && ( lis[i] < lis[j]+1 ) )
      {
        lis[i]=lis[j]+1;
      }
    }
  }
  
 for(int i=0;i<n;i++)
 {
  if(max<lis[i])
    max=lis[i];
 }
 return max;
}
