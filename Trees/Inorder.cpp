struct node
{
  int data;
   struct node* left;
   struct node* right;
};

void Inorder(struct node* root)
{
  if(root==NULL)
    return;
  
  Inorder(root->left);
  cout<<root->data<<" ";
  Inorder(root->right);
}
