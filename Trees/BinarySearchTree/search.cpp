int search(Node* root,int key)
{
  Node* temp=root;
  while(temp)
  {
    if(k < temp->key)
      temp=temp->left;
    else if ( k > temp->key)
      temp=temp->right;
    else
      return temp->data;
  }
  return 0;
}
