// checks if a binary tree is a BST

bool isBSTUtil(Node* node, int min, int max)
{
  if(node==NULL)
  {
    return true;
  }
  
  if(node->key < min || node->key > max)
    return false;
  
  return isBSTUtil(node->left,min,node->data) && isBSTUtil(node->right,node->data,max);
}



bool isBST(Node* root)
{
  if(isBSTUtil(root,INT_MIN,INT_MAX))
  {
    cout<<"this is a BST";
    return true;
  }
  else
  {
    cout<<"this is not a BST";
    return false;
  }
}
