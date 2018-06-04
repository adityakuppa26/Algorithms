struct node
{
  int data;
  struct node* left;
  struct node* right;
};

int maxDepth(struct node* root)
{
  if(root==NULL)
    return 0;
  else
  {
    int l=maxDepth(root->left);
    int r=maxDepth(root->right);
    
    if(l > r)
      return l+1;
    else
      return r+1;
  }
}
