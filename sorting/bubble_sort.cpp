void swap(int* a, int* b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}



void bubblesort(int arr[], int n)
{
  int i,j;
  bool swapped;
  for(i=0;i<n-1;i++)
  {
    swapped=false;
    for(j=0;j<n-i-1;j++)
    {
      if(arr[j] > arr[j+1])
      {
        swap(&arr[j],&arr[j+1]);
        swapped=true;
      }
    }
    if(swapped==false)
      break;
  }
}
