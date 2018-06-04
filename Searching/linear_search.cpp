int linear_search(int arr[], int n, int x)     // x is the required element to be found
{
  for(int i=0;i<n;i++)
  {
    if(arr[i]==x)
    {
      return i;
    }
  }
}
