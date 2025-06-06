#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

Node* insertNode(Node* root, int value) {
    if (root == nullptr)
        return new Node(value);

    if (value < root->data)
        root->left = insertNode(root->left, value);
    else
        root->right = insertNode(root->right, value);

    return root;
}

int floor(Node* root, int key) {
    int floorValue = -1;

    while (root) {
        if (root->data == key) {
            floorValue = root->data;
            return floorValue;
        }
        if (key > root->data) {
            floorValue = root->data;   
            root = root->right;
        } else {
            root = root->left;        
        }
    }

    return floorValue;
}

int main() {
    Node* root = nullptr;

    root = insertNode(root, 10);
    root = insertNode(root, 5);
    root = insertNode(root, 15);
    root = insertNode(root, 2);
    root = insertNode(root, 7);
    root = insertNode(root, 12);
    root = insertNode(root, 20);

    int key;
    cout << "Enter key to find floor: ";
    cin >> key;

    int result = floor(root, key);

    if (result != -1)
        cout << "Floor of " << key << " is: " << result << endl;
    else
        cout << "No floor found for " << key << " in the BST." << endl;

    return 0;
}
