#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

int maximumDepth(Node* root) {
    if (root == nullptr) {
        return 0;
    }

    int leftDepth = maximumDepth(root->left);
    int rightDepth = maximumDepth(root->right);

    return max(leftDepth, rightDepth) + 1;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    root->left->right->left = new Node(7);

    cout << "Maximum Depth of Tree: " << maximumDepth(root) << endl;

    return 0;
}
