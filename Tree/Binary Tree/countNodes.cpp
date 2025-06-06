#include <iostream>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) {
        val = value;
        left = nullptr;
        right = nullptr;
    }
};

int countNodes(TreeNode* root) {
    
    if (root == nullptr) return 0;

    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main() {
   
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);

    int total = countNodes(root);
    cout << "Total number of nodes in the tree: " << total << endl;

    return 0;
}
