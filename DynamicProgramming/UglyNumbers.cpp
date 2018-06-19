/* Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. By convention, 1 is included. Given a number n, the task is to find n’th Ugly number. */

int uglygen(int n)
{
  int ugly[n];
  int i2=0,i3=0,i5=0;
  int mul_of_2=2;
  int mul_of_3=3;
  int mul_of_5=5;
  int next=1;
  
  ugly[0]=1;
  
  for(int i=1;i<n;i++)
  {
    next=min(mul_of_2,min(mul_of_3,mul_of_5));
    ugly[i]=next;
    if(next==mul_of_2)
    {
      i2++;
      mul_of_2=ugly[i2]*2;
    }
    else if(next==mul_of_3)
    {
      i3++;
      mul_of_3=ugly[i3]*3;
    }
    else if(next==mul_of_5)
    {
      i5++;
      mul_of_5=ugly[i5]*5;
    }
  }
  return next;
}
