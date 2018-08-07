void swap(int* a, int* b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}



void bubblesort(int arr[], int n)
{
  bool swapped;
  for(int pass=n-1;pass>=0;pass--)
  {
    swapped=false;
    for(int i=0;i<=pass-1;i++)
    {
      if(arr[i] > arr[i+1])
      {
        swap(&arr[i],&arr[i+1]);
        swapped=true;
      }
    }
    if(swapped==false)
      break;
  }
}
