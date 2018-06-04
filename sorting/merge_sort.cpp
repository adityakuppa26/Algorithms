
void merge(int arr[], int l, int m, int r)
{
  int n1,n2;
  n1=m-l+1;
  n2=r-m;
  
  // copy left and right half's elements into temporary arrays
  
  int L[n1],R[n2];
  for(int i=0;i<n1;i++)
  {
    L[i]=arr[l+i];
  }
  for(int i=0;i<n2;i++)
  {
    R[i]=arr[m+1+i];
  }
  int i=0,j=0,k=l;
  
  while(i<n1 && j<n2)
  {
    if(L[i] <= R[j])
    {
      arr[k]=L[i];
      i++;
      k++;
    }
    else
    {
      arr[k]=R[j];
      j++;
      k++;
    }
  }
  while(i<n1)
  {
    arr[k]=L[i];
    i++;
    k++;
  }
  while(j<n2)
  {
    arr[k]=R[j];
    j++;
    k++;
  }
}



void mergesort(int arr[] , int l, int r)
{
  if(l<r)
  {
    int mid= l + (r-l)/2;    // same as (l+r)/2 , but prevents overflow for large l and r
    mergesort(arr,l,m);
    mergesort(arr,m+1,r);
    merge(arr,l,m,r);
  }
}


