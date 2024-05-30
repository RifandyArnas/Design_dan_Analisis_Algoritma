#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;
    
    Node(char value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

void preOrder(Node* node) {
    if (node == nullptr)
        return;
    cout << node->data << " ";
    preOrder(node->left);
    preOrder(node->right);
}

void inOrder(Node* node) {
    if (node == nullptr)
        return;
    inOrder(node->left);
    cout << node->data << " ";
    inOrder(node->right);
}

void postOrder(Node* node) {
    if (node == nullptr)
        return;
    postOrder(node->left);
    postOrder(node->right);
    cout << node->data << " ";
}

int main() {

    Node* root = new Node('R');
    root->left = new Node('A');
    root->right = new Node('E');
    root->left->right = new Node('S');
    root->left->right->left = new Node('I');
    root->left->right->right = new Node('T');

    cout << "PreOrder Traversal: ";
    preOrder(root);
    cout << endl;

    cout << "InOrder Traversal: ";
    inOrder(root);
    cout << endl;

    cout << "PostOrder Traversal: ";
    postOrder(root);
    cout << endl;

    return 0;
}