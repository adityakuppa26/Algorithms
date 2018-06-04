void ActivitySelection(int s[], int f[], int n)     // s[] and f[] contain the starting and finishing times of all the activities
{                                                   
  int i=0;                                          // sort all the activities in the increasing order of their finish times
  cout<<" the selected activities are :" <<endl;
  cout<<i<<endl;
  for(int j=1;j<n;j++)
  {
    if(s[j]>=f[i])
    {
      cout<<j<<endl;
      i=j;
    }
  }
}
