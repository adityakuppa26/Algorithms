void EgyptianFraction(int num, int den)
{
  if(num==0 || den==0)
  {
    return;
  }
  if(num%den==0)
  {
    cout<<num/den<<endl;
    return;
  }
  if(den%num==0)
  {
    cout<<"1/"<<den/num<<endl;
    return;
  }
  if(num > den)
  {
    cout<<num/den<<"+";
    EgyptianFraction(num%den,den);
    return;
  }
  
  int n= (den/num) + 1;
  cout<<"1/"<<n<<"+";
  EgyptianFraction(n*num-den, den*n);
}
