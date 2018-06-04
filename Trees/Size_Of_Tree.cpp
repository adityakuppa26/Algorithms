 // Size of a tree is the number of elements present in the tree.
 
 struct Node
 {
     int data;
     struct Node* left;
     struct Node* right;
};

int getSize(Node* node)
{
   if(node==NULL)
    return 0;
   int size=getSize(node->left)+getSize(node->right)+1;
   return size;
    
}
