int partition ( int arr[], int begin, int end)
{
  int index=begin;
  int pivot=arr[end];
  for(int i=begin;i<end;i++)
  {
    if(arr[i] <= pivot)
    {
      swap(&arr[i],&arr[index]);
      index++;
    }
  }
  swap(&arr[index],&arr[end]);
  return index;
}


void quicksort(int arr[], int begin, int end)
{
  if(begin >= end) 
    return;
  int pivot_element=partition(arr,begin,end);
  quicksort(arr,begin,pivot_element-1);
  quicksort(arr,pivot_element+1,end);
}
