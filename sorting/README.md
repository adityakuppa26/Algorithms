# Bubble Sort :
  
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order. It begins at the beginning of the dataset and continues doing this for each pair of adjacent elements upto the end of the dataset. This process is repeated until no more swaps take place in an iteration.  

```  
Time Complexity = O(n^2)
```
# Insertion Sort :
  
In this sort, the elements are selected from the array one by one and are inserted in an appropriate position by scanning the part of the array to the left of it. This is similar to arranging a set of cards in your hand, where, you insert a card in an appropriate position by scanning the given set from right to left.
    
```
Time Complexity = O(n^2)
```

# Selection Sort :
  
This sorting technique finds the smallest element in the data set and swaps it with the element in the first position. This process is repeated for the remaining list.
  
```
Time Complexity = O(n^2)
```

# Merge Sort : 
  
This technique splits the array onto two halves, the left and right halves are again split into two each, this process of splitting is repeated until no more splitting is possible. It then sorts the left part, the corresponding right part and then merges these two sorted lists.This process or sorting followed by merging is repeated until we get back the original array which is now sorted. 
  
```
Time Complexity = O(nlog(n))
```  
# Quick Sort :
  
QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot. The elements lesser than pivot are moved to its left and the elements greater then the pivot to its right. The algorithm is repeated on both the halves until the partition size becomes 1, which is sorted.  
  
```  
Time Complexity :  
  Worst case = O(n^2)  
  Best case = O(nlog(n))  
  Average case = O(nlog(n))
```

# Radix Sort :  
  
The idea of Radix Sort is to do digit by digit sort starting from least significant digit to most significant digit. Radix sort uses counting sort as a subroutine to sort.
  
```
Time Complexity = O(d*n)
    where,
    d is the no. of digits in the input integers
    n is the number of integers to be sorted
```  

# Counting Sort :
  
The integers in the data to be sorted range from 0-k. Create an array of size k to keep a count of the number of times an integer occurs. Using this count array we can construct the final sorted list.
  
```
Time Complexity = O(n+k)
    where,
    k is the largest element in the list to be sorted
```
