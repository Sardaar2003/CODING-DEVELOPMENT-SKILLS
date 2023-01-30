#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
class BinaryTree
{
public:
    void PreOrderTraversal(Node *node)
    {
        if (node == NULL)
            return;
        cout << node->data << " ";
        PreOrderTraversal(node->left);
        PreOrderTraversal(node->right);
    }
    void InOrderTraversal(Node *node)
    {
        if (node == NULL)
            return;
        InOrderTraversal(node->left);
        cout << node->data << " ";
        InOrderTraversal(node->right);
    }
    void PostOrderTraversal(Node *node)
    {
        if (node == NULL)
            return;
        PostOrderTraversal(node->left);
        PostOrderTraversal(node->right);
        cout << node->data << " ";
    }
    void LevelOrderTraversal(Node *node)
    {
        if (node == NULL)
            return;
        queue<Node *> result;
        result.push(node);
        while (!result.empty())
        {
            Node *temp = result.front();
            result.pop();
            cout << temp->data << " ";
            if (temp->left != NULL)
                result.push(temp->left);
            if (temp->right != NULL)
                result.push(temp->right);
        }
    }
};
int main()
{
    BinaryTree bt;
    Node *root = NULL;
    root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(7);
    root->left->right = new Node(2);
    root->left->left = new Node(3);
    root->right->left = new Node(9);
    cout << "Pre Order Traversal " << endl;
    bt.PreOrderTraversal(root);
    cout << "\nIn Order Traversal " << endl;
    bt.InOrderTraversal(root);
    cout << "\nPost Order Traversal " << endl;
    bt.PostOrderTraversal(root);
    cout << "\nLevel Order Traversal : " << endl;
    bt.LevelOrderTraversal(root);
}