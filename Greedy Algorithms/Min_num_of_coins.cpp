int den[]={1, 2, 5, 10, 20, 50, 200, 100, 500, 2000};
int Minimum_coins(int v)
{
  int result=0;
  vector<int> arr;
  for(int i=n-1; i>=0 ; i--)
  {
    while( v >= den[i])
    {
      v -= den[i];
      result++;
      arr.push_back(den[i]);
    }
  }
  
  // print the denominations used
  for(int i=0; i< arr.size(); i++)
  {
    cout<<arr[i]<<" ";
  }
  return result;
}
