// Given a Binary Tree, check if all leaves are at same level or not. 


bool isLeaf(Node* node)
{
    if(node->left==NULL && node->right==NULL)
        return true;
    else 
        return false;
}

int checkUtil(Node* root,int level, int& flag)
{
    if(root==NULL)
        return -1;
        
    
    if(isLeaf(root))
        return level;
        
    int l=checkUtil(root->left,level+1,flag);
    if(flag==0)
        return -1;
        
    int r=checkUtil(root->right,level+1,flag);
    if(flag==0)
        return -1;
    
    if(r==-1 || l==-1)
    {
        return (l==-1)? r:l ;
    }
    else
    {
        if(l==r)
            return l;
        else
            {
                flag=0;
            }
    }
}
bool check(Node *root)
{
    int level=0,flag=1;
    checkUtil(root,level,flag);
    if(flag==0)
        return false;
    else
        return true;
}



// OR


bool checkUtil(struct Node *root, int level, int *leafLevel)
{
    // Base case
    if (root == NULL)  return true;
 
    // If a leaf node is encountered
    if (root->left == NULL && root->right == NULL)
    {
        // When a leaf node is found first time
        if (*leafLevel == 0)
        {
            *leafLevel = level; // Set first found leaf's level
            return true;
        }
 
        // If this is not first leaf node, compare its level with
        // first leaf's level
        return (level == *leafLevel);
    }
 
    // If this node is not leaf, recursively check left and right subtrees
    return checkUtil(root->left, level+1, leafLevel) &&
           checkUtil(root->right, level+1, leafLevel);
}
 
/* The main function to check if all leafs are at same level.
   It mainly uses checkUtil() */
bool check(struct Node *root)
{
   int level = 0, leafLevel = 0;
   return checkUtil(root, level, &leafLevel);
}
