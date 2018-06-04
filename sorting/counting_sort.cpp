void counting_sort(int arr[], int n, int k)
{
  int count[k+1]={0};
  for(int i=0;i<n;i++)
  {
    count[arr[i]]++;
  }
  int index=0;
  for(int i=0;i<k+1;i++)
  {
    for(int j=0;j<count[i];j++)
    {
      arr[index++]=i;
    }
  }
}
