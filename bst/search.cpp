bool search(Node* root, int x) {
    if(root==NULL)
    return false;
    if(root->data==x)
    return true;
    if(root->data<x)
    {
        search(root->right,x);
    }
    else
    {
        search(root->left,x);
    }
}
