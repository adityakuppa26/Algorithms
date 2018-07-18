/* Given a text txt[0..n-1] and a pattern pat[0..m-1], write a function search(char pat[], char txt[]) that prints all occurrences of pat[] in txt[]. You may assume that n > m. */


void search (char* text, char* pat)
{
  int n=strlen(text);
  int m=strlen(pat);
  for(int i=0;i<=n-m;i++)
  {
    int j;
    for(j=0;j<m;j++)
    {
      if(text[i+j]!=pat[j])
        break;
    }
    if(j==m)
      cout<<"pattern found at:"<<i<<endl;
  }
  
}
