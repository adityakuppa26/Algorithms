// to find the Nth value in a Fibonacci series

// Fibonacci series : 1,1,2,3,5,8,13,....

int fib(int n)
{
  if(n<=2)
  {
    return 1;
  }
  else
  {
    return fib(n-1) + fib(n-2);
  }
}
