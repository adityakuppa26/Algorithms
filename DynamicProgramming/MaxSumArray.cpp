/* Given an array of integers, find the subset of non-adjacent elements with the maximum sum. Calculate the sum of that subset. 
For example, given an array arr=[-2,1,3,-4,5] 
we have the following possible subsets: 
Subset      Sum
[-2, 3, 5]   6
[-2, 3]      1
[-2, -4]    -6
[-2, 5]      3
[1, -4]     -3
[1, 5]       6
[3, 5]       8    */



int max(int a, int b)
{
    return (a>b)? a : b;
}
int maxSubsetSum(vector<int> arr, int s) {
    int sum[s+1];
    sum[0]=0;
    for(int k=1;k<=s;k++)
        sum[k]=arr[k-1];
    sum[2]=max(arr[0],arr[1]);
    for(int i=3;i<=s;i++)
    {
            sum[i]=max(max(arr[i-1]+sum[i-2],sum[i]),sum[i-1]);
    }
    return sum[s];
}
