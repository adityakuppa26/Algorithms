struct node
{
  int data;
   struct node* left;
   struct node* right;
};

void postorder(struct node* root)
{
  if ( root==NULL)
    return;
  
  postorder(root->left);
  postorder(root->right);
  cout<<root->data<<" ";
}
