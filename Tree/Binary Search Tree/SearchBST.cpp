#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int val) {
        value = val;
        left = nullptr;
        right = nullptr;
    }
};

Node* insertNode(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }

    if (value < root->value) {
        root->left = insertNode(root->left, value);
    } else {
        root->right = insertNode(root->right, value);
    }

    return root;
}

Node* searchNode(Node* root, int value) {
    while (root != nullptr && root->value != value) {
        if (value < root->value) {
            root = root->left;
        } else {
            root = root->right;
        }
    }
    return root;
}

int main() {
    Node* root = nullptr;

    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 70);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNode(root, 60);
    root = insertNode(root, 80);

    int searchVal;
    cout << "Enter value to search: ";
    cin >> searchVal;

    Node* result = searchNode(root, searchVal);

    if (result != nullptr) {
        cout << "Node found: " << result->value << endl;
    } else {
        cout << "Node not found!" << endl;
    }

    return 0;
}
