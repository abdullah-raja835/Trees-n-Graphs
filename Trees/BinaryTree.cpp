#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
void preOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
void postOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
Node *BinaryTree()
{
    int x;
    cin >> x;
    if (x == -1)
    {
        return NULL;
    }

    Node *temp = new Node(x);
    cout << "Enter the left child of " << x << endl;
    ;
    temp->left = BinaryTree();
    cout << "Enter the right child of " << x << endl;
    temp->right = BinaryTree();
    return temp;
}

int main()
{
    cout << "Enter the root node \n";
    Node *root = BinaryTree();
    cout << "\npreOrder Traversal :";
    preOrder(root);
    cout << "\ninOrder Traversal :";
    inOrder(root);
    cout << "\npostOrder Traversal :";
    postOrder(root);
}