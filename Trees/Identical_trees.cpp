// checks if two trees are identical or not.
// Two trees are identical when they have same data and arrangement of data is also same.

struct Node
{
    int data;
    struct Node* left, * right;
};

bool isIdentical(Node *r1, Node *r2)
{
    if(r1==NULL || r2==NULL)
    {
        if(r1==r2)
            return true;
        else
            return false;
    }
    if(r1->data==r2->data)
    {
        bool left=isIdentical(r1->left,r2->left);
        bool right=isIdentical(r1->right,r2->right);
        return (left&&right);
    }
    else
    {
        return false;
    }
}
