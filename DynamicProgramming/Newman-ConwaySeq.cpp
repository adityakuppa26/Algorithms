/* Newman-Conway Sequence is the one which generates the following integer sequence.
1 1 2 2 3 4 4 4 5 6 7 7…
Given a number n, print n-th number in Newman-Conway Sequence.

In mathematical terms, the sequence P(n) of Newman-Conway numbers is defined by recurrence relation
P(n) = P(P(n - 1)) + P(n - P(n - 1))

*/


int sequence(int n)
{
    int f[n + 1];
    int i;
    f[0] = 0;
    f[1] = 1;
    f[2] = 1;
 
    for (i = 3; i <= n; i++) 
        f[i] = f[f[i - 1]] + f[i - f[i - 1]];    
 
    return f[n];
}
