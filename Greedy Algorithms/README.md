# Greedy Algorithms 
  
Greedy is an algorithmic paradigm that builds up a solution piece by piece, always choosing the next piece that offers the most obvious and immediate benefit. Greedy algorithms are used for optimization problems.  
An optimization problem can be solved using Greedy if the problem has the following property: At every step, we can make a choice that looks best at the moment, and we get the optimal solution of the complete problem.  
  
# Activity Selection Problem
  
You are given n activities with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.  
  
The greedy choice is to always pick the next activity whose finish time is least among the remaining activities and the start time is more than or equal to the finish time of previously selected activity. We can sort the activities according to their finishing time so that we always consider the next activity as minimum finishing time activity.  
```
1) Sort the activities according to their finishing time  
  
2) Select the first activity from the sorted array and print it.

3) Do following for remaining activities in the sorted array.  
...a) If the start time of this activity is greater than or equal to the finish time of previously 
      selected activity then select this activity and print it.  

Time Complexity : O(n) , given that the activites are sorted.
```
  
# Job Sequencing Problem
  
Given an array of jobs where every job has a deadline and associated profit if the job is finished before the deadline. It is also given that every job takes single unit of time, so the minimum possible deadline for any job is 1. How to maximize total profit if only one job can be scheduled at a time.  
  
```
1) Sort all jobs in decreasing order of profit.  

2) Initialize the result sequence as first job in sorted jobs.

3) Do following for remaining n-1 jobs
....a) If the current job can fit in the current result sequence 
          without missing the deadline, add current job to the result.
          Else ignore the current job.

Time complexity : O(n^2) , provided that the jobs are sorted 
```
  
# Egyptian Fraction
  
Every positive fraction can be represented as sum of unique unit fractions. A fraction is unit fraction if numerator is 1 and denominator is a positive integer, for example 1/3 is a unit fraction. Such a representation is called Egyptian Fraction.  
```  
We can generate Egyptian Fractions using Greedy Algorithm. For a given number of the form ‘nr/dr’ where
dr > nr, first find the greatest possible unit fraction, then recur for the remaining part. For example,
consider 6/14, we first find ceiling of 14/6, i.e., 3. So the first unit fraction becomes 1/3, then recur
for (6/14 – 1/3) i.e., 4/42. 
```  
# Fractional Knapsack Problem
  
Given weights and values of n items, we need put these items in a knapsack of capacity W to get the maximum total value in the knapsack.  
In Fractional Knapsack, we can break items for maximizing the total value of knapsack. This problem in which we can break item also called fractional knapsack problem.   
```  
An efficient solution is to use Greedy approach : 

1) The basic idea of greedy approach is to calculate the ratio value/weight for each item.

2) Sort the items on basis of this ratio. 

3) Then take the item with highest ratio and add them until we can’t add the next item as whole and at the 
end add the next item as much as we can. 
```
