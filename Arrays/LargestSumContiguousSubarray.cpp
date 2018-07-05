/*  find the sum of contiguous subarray within a one-dimensional array of numbers which has the largest sum. */

int LargestSum(int arr[],int n)           //n is the size of arr[]
{
  int max_so_far=INT_MIN,max_ending_here=0;         // max_so_far represents the max sum of contiguous array seen so far
  for(int i=0;i<n;i++)  
  {
    max_ending_here=max_ending_here + arr[i];       //max_ending_here represents the max sum of contiguous array upto it
    if(max_ending_here > max_so_far)
      max_so_far=max_ending_here;
    if(max_ending_here<0)
      max_ending_here=0;
  }
  return max_so_far;
}
