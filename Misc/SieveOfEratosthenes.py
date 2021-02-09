def SieveOfEratosthenes(n):
  prime = [True for i in range(0, n+1)]
  num = 2
  while num*num <= n:
    if prime[num]:
      for p in range(num*num, n+1, num):
        prime[p] = False
    num += 1

  primes = [i for i in range(2, n+1) if prime[i] == True]
  return primes

res = SieveOfEratosthenes(50)
print(res)
