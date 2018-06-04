struct node
{
  int data;
  struct node* left;
  struct node* right;
};

void preorder(node* root)
{
  if(root==NULL)
    return;
    
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}
