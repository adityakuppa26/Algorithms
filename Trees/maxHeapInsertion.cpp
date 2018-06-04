void insert(Node* node)
{
  int currentNode = ++heapsize;      // assigns the correct position to maintain the complete binary tree
  while(currentNode!=1 && heap[(currentNode/2)]->data < node->data)       // checks is parent is lesser than the node to be inserted
  {
    heap[currentNode] = heap[currentNode/2];     // heap holds the tree nodes with indices corresponding to their positions in the tree
    currentNode=currentNode/2;
  }
  heap[currentNode] = node;
}
