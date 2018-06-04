struct node
{
  int data;
  struct node* left;
  struct node* right;   
};


// #include<queue>

void LevelOrder(struct node* root)
{
  struct node* temp=root;
  std::queue<struct node*> q;
  
  while(temp)
  {
    cout<<temp->data<<" ";
    q.push(temp->left);
    q.push(temp->right);  
    temp=q.front();
    q.pop();
  }
}
