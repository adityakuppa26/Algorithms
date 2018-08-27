/*Catalan numbers are a sequence of natural numbers that occurs in many interesting counting problems like following.
1) Count the number of expressions containing n pairs of parentheses which are correctly matched. For n = 3, possible expressions are ((())), ()(()), ()()(), (())(), (()()).
2) Count the number of possible Binary Search Trees with n keys (See this)
3) Count the number of full binary trees (A rooted binary tree is full if every vertex has either two children or no children) with n+1 leaves.
The first few Catalan numbers for n = 0, 1, 2, 3, … are 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, …
*/



unsigned long int catalan(unsigned int n)
{
    unsigned long int catalan[n+1];
    catalan[0] = catalan[1] = 1;
    for (int i=1; i<n; i++)
    {
        catalan[i+1] = 0;
        for (int j=0; j<=i; j++)
            catalan[i+1] += catalan[j] * catalan[i-j];
    }
    return catalan[n];
}
