int maxPathUtil(Node* root, int& res)
{
  // base case
  
  if(root==NULL)
    return 0;
  
  // l and r store maximum path sum going through left and 
 // right child of root respectively
  
  int l=maxPathutil(root->left,res);
  int r=maxPathUtil(root->right,res);
  
  // Max path for parent call of root. This path must
  // include at-most one child of root
  
  int max_single=max(max(l,r)+root->data, root->data);
  
  // Max Top represents the sum when the Node under
  // consideration is the root of the maxsum path and no
  // ancestors of root are there in max sum path
  
  int max_top=max(max_single,l+r+root->data);
  
  // Store the Maximum Result.
  
  res=max(res,max_top);
  
  return max_single;
}

int maxPathSum(Node* root)
{
  int res=INT_MIN;
  
  maxPathUtil(root,res);
  
  return res;
}
