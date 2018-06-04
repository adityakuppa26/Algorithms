struct Job
{
  char id;
  int deadline;
  int profit;
};

void JobSequencing(struct Job arr[], int n)
{
  // sort the jobs in the decreasing order of their profits
  
  int result[n];
  bool status[n];
  for(int i=0;i<n;i++)
  {
    status[i]=false;
  }
  for(int i=0;i<n;i++)
  {
    for(int j= min(n,arr[i].deadline)-1; j>=0 ; j--)
    {
      if(status[j]==false)
      {
        result[j]=i;
        status[j]=true;
        break;
      }
    }
  }
  
  // print the jobs in the result
  
  for(int i=0;i<n;i++)
  {
    if(status[i]==true)
    {
      cout<<arr[result[i]].id<<"\t";
    }
  }
}
