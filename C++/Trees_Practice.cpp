#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} Node;
Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
Node *root = NULL;
Node *InsertNode(Node *root, int data)
{
    if (root == NULL)
    {
        root = createNode(data);
        return root;
    }
    if (data < root->data)
    {
        root->left = InsertNode(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = InsertNode(root->right, data);
    }
    return root;
}
int height(Node *root)
{
    if (root == NULL)
        return 0;
    int l = height(root->left);
    int r = height(root->right);
    return max(l, r) + 1;
}
void printLevelOrder(Node *root, int index, vector<int> data)
{
    if (root == NULL)
        return;
    if (level == 1)
    {
        data.push_back(root->data);
    }
    else
    {
        printLevelOrder(root->left, index++, data);
        printLevelOrder(root->right, index++, data);
    }
}
void levelOrder(Node *root)
{
    int h = height(root);
    // int i = 1;
    vector<int> data;
    for (int i = 1; i <= h; i++)
    {
        printLevelOrder(root, i, data);
    }
    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i] << " ";
    }
}
void addNode(int key)
{
    root = InsertNode(root, key);
}
Node *searchKey(Node *root, int key)
{
    if (root == NULL || key == root->data)
    {
        return root;
    }
    else if (key > root->data)
    {
        return searchKey(root->right, key);
    }
    else if (key < root->data)
    {
        return searchKey(root->left, key);
    }
}
void Search(int key)
{
    Node *node = searchKey(root, key);
    if (node != NULL)
        cout << "The Key is found " << endl;
    else
        cout << "Key is Not Found " << endl;
}
int minimumValue(Node *root)
{
    int min = root->data;
    while (root->left != NULL)
    {
        min = root->left->data;
        root = root->left;
    }
    return min;
}
Node *deleteNode(Node *root, int key)
{
    if (root == NULL)
        return root;
    if (key < root->left->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->right->data)
        root->right = deleteNode(root->right, key);
    else
    {
        if (root->left == NULL)
            return root->right;
        else if (root->right == NULL)
            return root->left;
        root->data = minimumValue(root->right);
        root->right = deleteNode(root->right, root->data);
    }
    return root;
}
void DeleteNode(int key)
{
    root = deleteNode(root, key);
}
int main()
{
    int element;
    cin >> element;
    for (int i = 0; i < element; i++)
    {
        int ele;
        cin >> ele;
        addNode(ele);
    }
}