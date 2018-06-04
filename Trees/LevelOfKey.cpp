// finds the level of a given key , considering root level as 0

int keyLevel(Node* root, int k, int level)
{
  if(root==NULL)
    return -1;
  if(root->data==k)
    return level;
  int left=keyLeve;(root->left,k,level+1);
  if(left==-1)
    return keyLevel(root->right,k,level+1);
  return left;
}

int main()
{
  Node* root;
  int a=3;            // say
  int level = keyLevel(root, a, 0);
}
