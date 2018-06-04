void delete()
{
  if(IsEmpty())
    throw "Heap is empty , cannot delete";
  
  heap[1] = ~heapElement() ;            // destructor to delete the root element
  
  Node* last=heap[heapSize--];          // heapSize holds the current size of heap
  
  int current=1;                     // root 
  int child=2;                      // child of deleted root
  
  while(child<=heapSize)
  {
    // choose the greatest among the children to take the vacancy
    if(child<heapSize && heap[child]<heap[child+1])
      child++;
    
    // check if last elemt can fill the vacancy
    if(last >= heap[child])
      break;
      
    // assign the child to the vacant spot
    heap[current]=heap[child];
    current=child;
    child=2*child;
  }
  heap[current]=last;
}
