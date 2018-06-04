int findpath(Node* root,int n1,vector<Node*>& path)
{
    if(root==NULL)
        return 0;
    path.push_back(root);
    if(root->data==n1)
    {
        return 1;   
    }
    int fo1=findpath(root->left,n1,path);
    if(fo1==1)
        return 1;
    int fo2=findpath(root->right,n1,path);
    if(fo2==1)
        return 1;
    path.pop_back();
    return 0;
}
Node * LCA(Node* root ,int n1 ,int n2 )
{
   vector<Node*> path1,path2;
   findpath(root,n1,path1);
   findpath(root,n2,path2);
   int s1=path1.size();
   int i=s1-1;
   int s2=path2.size();
   while(i>=0)
   {
       for(int j=s2-1;j>=0;j--){
       if(path1[i]->data==path2[j]->data)
        { return path1[i];
            break;}
       }
       i--;
   }
}


// if the given nodes are certainly present in  the tree then the below code can be used


Node* LCA(Node* root, int n1,int n2)
{
  if(root==NULL)
    return NULL;
    
  if(root->data==n1 || root->data==n2)
    return root;
  
  Node* left=LCA(root->left,n1,n2);
  Node* right=LCA(root->right,n1,n2);
  
  
  if(left && right)
    return root;
    
  return (left!=NULL) ? left : right ;
}
