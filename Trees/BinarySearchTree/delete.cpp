Node* minNode(Node* node)
{
  Node* current=node;
  while(current->left != NULL)
  {
    current=current->left;
  }
  return current;
}

Node* delete(Node* root, int key)
{
  //base case
  if(root==NULL)
    return root;
    
  // if key to be deleted is smaller than the root
  if(key < root->key)
    root->left=delete(root->left,key);
  
  // if key to be deleted is larger than the root
  else if(key > root->key)
    root->right=delete(root->right,key);
    
  else
  {
    // if key has one or no children
    if(root->left==NULL)
    {
      Node* temp=root->right;
      free(root);
      return temp;
    }
    else if(root->right == NULL)
     {
      Node* temp=root->left;
      free(root);
      return temp;
     }
     
     // if key has two children
     Node* min= minNode(root->right);
     root->key=min->key;
     root->right=delete(root->right,min->key);
  }
  return root;
}
