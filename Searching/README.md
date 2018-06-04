# Linear Search
  
In this searching technique, each element of the list is checked until the required element is found or the list is exhausted.
  
```
Time complexity = O(n)
```

# Binary Search
  
This searching method uses a sorted array of elements, where the desired value to be searched is represented by the variable target for the sake of clarity. The target value is initially compared with the middle element , if the target matches the mid element the function returns true stating that it found the element. If the target element is lesser than the middle element, the higher bound is set to the middle since it is a sorted array and we can be sure of finding the target in the lower half. Similarly, if the target is greater than the middle element , the lower bound is set to the middle. This process is repeated and we are eventually left only with the target value.
  
```
Time complexity = O(log n)
```
