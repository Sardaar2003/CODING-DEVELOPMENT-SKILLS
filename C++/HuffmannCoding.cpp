#include <bits/stdc++.h>
using namespace std;

struct Node
{
    char ch;
    int freq;
    Node *left, *right;
};

struct cmp
{
    bool operator()(Node *a, Node *b)
    {
        return a->freq > b->freq;
    }
};

void encode(Node *root, string code, unordered_map<char, string> &mp)
{
    if (root == NULL)
        return;
    if (root->ch != '$')
        mp[root->ch] = code;
    encode(root->left, code + "0", mp);
    encode(root->right, code + "1", mp);
}

void huffmanCode(string str)
{
    unordered_map<char, int> freq;
    for (char ch : str)
        freq[ch]++;
    priority_queue<Node *, vector<Node *>, cmp> pq;
    for (auto it : freq)
        pq.push(new Node{it.first, it.second, NULL, NULL});
    while (pq.size() > 1)
    {
        Node *left = pq.top();
        pq.pop();
        Node *right = pq.top();
        pq.pop();
        Node *newNode = new Node{'$', left->freq + right->freq, left, right};
        pq.push(newNode);
    }
    unordered_map<char, string> mp;
    encode(pq.top(), "", mp);
    for (char ch : str)
        cout << ch << " : " << mp[ch] << " \n";
}

int main()
{
    string str;
    // cin >> str;
    getline(cin, str);
    // cout << str << " ";
    // cin >> str;
    huffmanCode(str);
    return 0;
}
