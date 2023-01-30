#include <bits/stdc++.h>
#include <queue>
using namespace std;
typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

} Node;
Node *root = NULL;
Node *CreateNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void PreOrderTraversal(Node *node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";
    PreOrderTraversal(node->left);
    PreOrderTraversal(node->right);
}
void PostOrderTraversal(Node *root)
{
    if (root == NULL)
        return;
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout << root->data << " ";
}
void InOrderTraversal(Node *node)
{
    if (node == NULL)
        return;
    InOrderTraversal(node->left);
    cout << node->data << " ";
    InOrderTraversal(node->right);
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
int main()
{
    root = CreateNode(5);
    root->left = CreateNode(6);
    root->right = CreateNode(7);
    root->left->left = CreateNode(4);
    root->left->right = CreateNode(3);
    root->right->left = CreateNode(2);
    cout << "Pre Order Traversal : " << endl;
    PreOrderTraversal(root);
    cout << "\nIn Order Traversal : " << endl;
    InOrderTraversal(root);
    cout << "\nPost Order Traversal : " << endl;
    PostOrderTraversal(root);
    cout << "\nLevel Order Traversal : " << endl;
    LevelOrderTraversal(root);
}