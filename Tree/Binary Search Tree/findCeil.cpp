#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

Node* insertNode(Node* root, int value) {
    if (root == nullptr) return new Node(value);

    if (value < root->data)
        root->left = insertNode(root->left, value);
    else
        root->right = insertNode(root->right, value);

    return root;
}

int findCeil(Node* root, int key) {
    int ceil = -1;

    while (root) {
        if (root->data == key) {
            ceil = root->data;
            return ceil;
        }

        if (key > root->data) {
            root = root->right; 
        } else {
            ceil = root->data;
            root = root->left;   
        }
    }

    return ceil;
}

int main() {
    Node* root = nullptr;
    root = insertNode(root, 8);
    root = insertNode(root, 4);
    root = insertNode(root, 12);
    root = insertNode(root, 2);
    root = insertNode(root, 6);
    root = insertNode(root, 10);
    root = insertNode(root, 14);

    int key;
    cout << "Enter the key to find ceil: ";
    cin >> key;

    int result = findCeil(root, key);

    if (result != -1)
        cout << "Ceil of " << key << " is: " << result << endl;
    else
        cout << "No ceil found for " << key << " in the tree." << endl;

    return 0;
}
