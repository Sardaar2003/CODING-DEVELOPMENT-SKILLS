#include <bits/stdc++.h>
#include <queue>
using namespace std;
typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

} Node;
Node *CreateNewNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
}
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
    queue<Node *> result;
    if (node == NULL)
        return;
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
    Node *root = CreateNewNode(5);
    root->left = CreateNewNode(4);
    root->right = CreateNewNode(10);
    root->left->left = CreateNewNode(2);
    root->left->right = CreateNewNode(15);
    root->right->left = CreateNewNode(1234);
    cout << "Pre Order Traversal : " << endl;
    PreOrderTraversal(root);
    cout << "\nIn Order Traversal : " << endl;
    InOrderTraversal(root);
    cout << "\nPost Order Traversal : " << endl;
    PostOrderTraversal(root);
    cout << "\nLevel Order Traversal :" << endl;
    LevelOrderTraversal(root);
}