// Given a binary tree and a number, return true if the tree has a root-to-leaf path such that adding up all the values along the path  //equals the given number. Return false if no such path can be found. 

struct Node
{
    int data;
    Node* left, * right;
}; 

bool hasPathSum(Node *node, int sum)
{
   if(node==NULL)
    return sum==0;
   sum=sum-node->data;
   if(sum<0)
    return false;
   if(sum==0)
   { if(node->left==NULL && node->right==NULL)
        return true;
     else return false;
   }
   bool l=hasPathSum(node->left,sum);
   bool r=hasPathSum(node->right,sum);
   return (l||r);
}
