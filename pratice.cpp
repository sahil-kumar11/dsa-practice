bool BSTUtil(Node* root,int min,int max){
    if(root == nullptr) return false;
    if(root->data <= min || root->data >= max) return false;
    return BSTUtil(root->left,min,root->data) && BSTUtil(root->right,max,root->data);
}
bool checkBST(Node* root){
    return BSTUtil(root,INT_MIN,INT_MAX);
}