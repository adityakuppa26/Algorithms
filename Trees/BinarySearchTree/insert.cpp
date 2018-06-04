struct Node* newNode(int item)
{
  struct Node* node=(struct Node*)malloc(sizeof(struct Node));
  node->key=item;
  node->left=NULL;
  node->right=NULL:
  return node;
}


struct Node* insert(Node* root,int key)
{
  if(root==NULL)
    return newNode(key);
  if(key > root->key)
    root->right=insert(root->right,key);
  else if ( key < root->key)
    root->left=insert(root->left,key);
  
  return root;
}
