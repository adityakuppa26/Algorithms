void binary(unsigned int n)
{
  if(n>1)
  {
    bin(n/2);
  }
  cout<<(n%2);
}
