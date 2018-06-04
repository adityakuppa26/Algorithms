float pow(float x, int n)      // n can be any integer
{
  if(n==0)
  {
    return 1;
  }
  float temp= pow(x,n/2);
  if(n%2==0)
  {
    return temp*temp;
  }
  else
  {
    if(n>0)
    {
      return x*temp*temp;
    }
    else
    {
      return (temp*temp)/x;
    }
  }
}
