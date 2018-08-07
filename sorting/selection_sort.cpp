void swap(int* a, int* b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}

void selectionsort(int arr[], int n)
{
  int min;
  for(int i=0;i<n-1;i++)
  {
    min=i;
    for(int j=i+1;j<n;j++)
    {
      if(arr[j] < arr[min] )
      {
        min=j;
      }
    }
    swap(&arr[i],&arr[min]);
  }
}
