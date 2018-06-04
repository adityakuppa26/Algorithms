void swap(int* a, int* b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}

void selectionsort(int arr[], int n)
{
  int min,index;
  for(int i=0;i<n-1;i++)
  {
    min=arr[i];
    index=i;
    for(j=i+1;j<n;j++)
    {
      if(min > arr[j])
      {
        min=arr[j];
        index=j;
      }
    }
    swap(&arr[i],&arr[index]);
  }
}
