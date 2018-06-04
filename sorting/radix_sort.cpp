int get_max(int arr[], int n)
{
  int max=arr[0];
  for(int i=1;i<n;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
    }
  }
  return max;
}

void counting_sort(int arr[], int n, int exp)
{
  int output[n];
  int count[10]={0};    // buckets to store count of various digits
  for(int i=0;i<n;i++)
  {
    count[(arr[i]/exp)%10]++;      // counts the number of each digit
  }
  
  // Change count[i] so that count[i] now contains actual
  //  position of this digit in output[]
  
  for(int i=1;i<10;i++)
  {
    count[i] += count[i-1];
  }
  
  // build the output array
  
  for(int i=n-1;i>=0;i--)
  {
    output[count[(arr[i]/exp)%10]-1] = arr[i];
    count[(arr[i]/exp)%10]--;
  }
  
  for(int i=0;i<n;i++)
  {
    arr[i]=output[i];
  }
}

void radix_sort(int arr[], int n)
{
  int m = get_max(arr,n);     // gets the maximum number of the array
  
  for(int exp=1; m/exp > 0; exp*=10)
    {
      counting_sort(arr,n,exp);
    }
}
