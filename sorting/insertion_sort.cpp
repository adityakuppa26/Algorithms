void insertionsort(int arr[] , int n)
{
  int current;                      // holds the current element
  for(int i=1;i<n;i++)
  {
     current = arr[i];
     int j=i-1;
     while(j>=0 && arr[j]>current)
     {
        arr[j+1]=arr[j];
        j--;
     }
     arr[j+1]=current;
  }
}
