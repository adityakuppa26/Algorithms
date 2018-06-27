/* Given two strings str1 and str2 and below operations that can performed on str1. Find minimum number of edits (operations) required to convert ‘str1’ into ‘str2’.
a. Insert
b. Remove
c. Replace  */

int edit_dist(char* str1, char* str2, int m, int n)
{
  int edit[m+1][n+1];
  for(int i=0;i<=m;i++)
  {
    for(int j=0;j<=n;j++)
    {
      if(i==0)
      {
        edit[i][j]=j;
      }
      if(j==0)
      {
        edit[i][j]=i;
      }
      if(str1[i-1]==str2[j-1])
      {
        edit[i][j]=edit[i-1][j-1];
      }
      else
      {
        edit[i][j]= 1 + min(edit[i][j-1],edit[i-1][j],edit[i-1][j-1]);
      }
    }
  }
  return edit[m][n];
}
