void insertionsort(int arr[] , int n)
{
  int current,j;                      // holds the current element
  for(int i=1;i<n;i++)
  {
     current = arr[i];
     j=i;
     while(j>=1 && arr[j-1]>current)
     {
        arr[j]=arr[j-1];
        j--;
     }
     arr[j]=current;
  }
}
