#include <iostream>
#include <unordered_map>
#include <queue>
#include <vector>

using namespace std;

struct Node
{
    char ch;
    int freq;
    Node *left, *right;
};

struct compare
{
    bool operator()(Node *l, Node *r)
    {
        return l->freq > r->freq;
    }
};

unordered_map<char, string> huffmanCode;

void printCodes(Node *root, string str)
{
    if (!root)
        return;

    if (root->ch != '$')
        cout << root->ch << ": " << str << endl;

    printCodes(root->left, str + "0");
    printCodes(root->right, str + "1");
}

void HuffmanCodes(string text)
{
    unordered_map<char, int> freq;
    for (char ch : text)
        freq[ch]++;

    priority_queue<Node *, vector<Node *>, compare> heap;
    printf("Hello World");
    for (auto pair : freq)
    {
        Node *node = new Node();
        node->ch = pair.first;
        node->freq = pair.second;
        node->left = node->right = nullptr;
        heap.push(node);
    }

    while (heap.size() != 1)
    {
        Node *left = heap.top();
        heap.pop();
        Node *right = heap.top();
        heap.pop();

        Node *top = new Node();
        top->ch = '$';
        top->freq = left->freq + right->freq;
        top->left = left;
        top->right = right;
        heap.push(top);
    }

    printCodes(heap.top(), "");
}

int main()
{
    string text = "This is Different";
    HuffmanCodes(text);
    return 0;
}
