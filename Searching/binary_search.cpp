bool binary_search(int arr[],int n,int target)
{
  int lo=0;
  int hi=n-1,mid;
  while(lo<=hi)
  {
    mid=lo + (hi-lo)/2;
    if(arr[mid]==target)
      return true;
     else if(arr[mid] < target)
     {
      lo=mid+1;
     }
     else
      hi=mid-1;
  }
  return false;
}
