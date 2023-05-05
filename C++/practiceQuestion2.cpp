// // // // // // // #include <bits/stdc++.h>
// // // // // // // using namespace std;
// // // // // // // int binarySearch(vector<int> &data, int target)
// // // // // // // {
// // // // // // //     int start = 0;
// // // // // // //     int end = data.size() - 1;
// // // // // // //     while (start <= end)
// // // // // // //     {
// // // // // // //         int mid = start + (end - start) / 2;
// // // // // // //         if (data[mid] == target)
// // // // // // //             return mid;
// // // // // // //         else if (data[mid] < target)
// // // // // // //             start = mid + 1;
// // // // // // //         else
// // // // // // //             end = mid - 1;
// // // // // // //     }
// // // // // // //     return start;
// // // // // // // }
// // // // // // // int main()
// // // // // // // {
// // // // // // //     int a, b;
// // // // // // //     cin >> a >> b;
// // // // // // //     vector<int> res;
// // // // // // //     int minVal = min(a, b);
// // // // // // //     for (int i = 1; i <= minVal / 2; i++)
// // // // // // //         if (a % i == 0 && b % i == 0)
// // // // // // //             res.push_back(i);
// // // // // // //     // for (int j = 0; j < res.size(); j++)
// // // // // // //     //     cout << res[j] << " ";
// // // // // // //     int query;
// // // // // // //     cin >> query;
// // // // // // //     while (query--)
// // // // // // //     {
// // // // // // //         int low, high;
// // // // // // //         cin >> low >> high;
// // // // // // //         int start = binarySearch(res, low);
// // // // // // //         int end = binarySearch(res, high);
// // // // // // //         int maxValue = 0;
// // // // // // //         for (int i = start; i < res.size(); i++)
// // // // // // //         {
// // // // // // //             if (res[i] >= low && res[i] <= high)
// // // // // // //                 maxValue = res[i];
// // // // // // //         }
// // // // // // //         if (maxValue == 0)
// // // // // // //             cout << -1 << endl;
// // // // // // //         else
// // // // // // //             cout << maxValue << endl;
// // // // // // //         // cout << start << " " << end << " " << endl;
// // // // // // //         // cout << res.size() << endl;

// // // // // // //         // if (start < res.size() && end <= res.size())
// // // // // // //         //     cout << *max_element(res.begin() + start, res.begin() + end) << endl;
// // // // // // //         // else
// // // // // // //         //     cout << -1 << endl;
// // // // // // //     }
// // // // // // //     return 0;
// // // // // // // }
// // // // // // #include <bits/stdc++.h>
// // // // // // using namespace std;
// // // // // // int main()
// // // // // // {
// // // // // //     int testcases;
// // // // // //     cin >> testcases;
// // // // // //     while (testcases--)
// // // // // //     {
// // // // // //         long long a, b;
// // // // // //         cin >> a >> b;
// // // // // //         int mod = 1e6 + 3;
// // // // // //         long long val = 1;
// // // // // //         for (int i = 0; i <= b; i++)
// // // // // //         {
// // // // // //             long long powVal = (int)pow(a, i) % mod;
// // // // // //             val = (val * powVal) % mod;
// // // // // //         }
// // // // // //         if (val == a)
// // // // // //             cout << (b * val) << endl;
// // // // // //         else
// // // // // //             cout << val << endl;
// // // // // //     }
// // // // // //     return 0;
// // // // // // }
// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;
// // // // // int main()
// // // // // {
// // // // //     int testcases;
// // // // //     cin >> testcases;
// // // // //     while (testcases--)
// // // // //     {
// // // // //         string data1, data2;
// // // // //         cin >> data1;
// // // // //         string res = data1;
// // // // //         cin >> data2;
// // // // //         if (data1.length() != data2.length())
// // // // //             cout << "No" << endl;
// // // // //         else
// // // // //         {
// // // // //             int length = data1.length() - 2;
// // // // //             rotate(data1.begin(), data1.begin() + length, data1.end());
// // // // //             // cout << data1 << endl;
// // // // //             if (data1 == data2)
// // // // //                 cout << "Yes" << endl;
// // // // //             else
// // // // //             {
// // // // //                 rotate(res.begin(), res.begin() + 2, res.end());
// // // // //                 if (res == data2)
// // // // //                     cout << "Yes" << endl;
// // // // //                 else

// // // // //                     cout << "No" << endl;
// // // // //             }
// // // // //         }
// // // // //     }
// // // // // }
// // // // // void removeElement(priority_queue<int)
// // // // #include <bits/stdc++.h>
// // // // using namespace std;
// // // // int main()
// // // // {
// // // //     int testcases;
// // // //     cin >> testcases;
// // // //     while (testcases--)
// // // //     {
// // // //         int size, k;
// // // //         cin >> size >> k;
// // // //         k -= 1;
// // // //         priority_queue<int, vector<int>, greater<int>> pq;
// // // //         int ele;
// // // //         while (size--)
// // // //         {
// // // //             cin >> ele;
// // // //             pq.push(ele);
// // // //         }
// // // //         // removeElement(pq, k);
// // // //         vector<int> res;
// // // //         while (!pq.empty())
// // // //         {
// // // //             int val = pq.top();
// // // //             pq.pop();
// // // //             res.push_back(val);
// // // //         }
// // // //         res.erase(res.begin() + k);
// // // //         for (int i = 0; i < res.size(); i++)
// // // //             cout << res[i] << " ";
// // // //     }
// // // // }
// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // bool comp(pair<int, int> a, pair<int, int> b)
// // // {
// // //     double a1 = (double)a.second / a.first;
// // //     double a2 = (double)b.second / b.first;
// // //     return a1 > a2;
// // //     // return a.first > b.first;
// // // }
// // // int main()
// // // {
// // //     int testcases;
// // //     cin >> testcases;
// // //     while (testcases--)
// // //     {
// // //         int size, capacity;
// // //         cin >> size >> capacity;
// // //         vector<int> cap(size);
// // //         vector<int> cost(size);
// // //         for (int i = 0; i < size; i++)
// // //             cin >> cap[i];
// // //         for (int i = 0; i < size; i++)
// // //             cin >> cost[i];
// // //         vector<pair<int, int>> res;
// // //         for (int i = 0; i < size; i++)
// // //         {
// // //             pair<int, int> p = make_pair(cap[i], cost[i]);
// // //             res.push_back(p);
// // //         }
// // //         sort(res.begin(), res.end(), comp);
// // //         int value = 0;
// // //         for (int i = 0; i < res.size(); i++)
// // //         {
// // //             if (capacity >= res[i].first)
// // //             {
// // //                 capacity -= res[i].first;
// // //                 value += res[i].second;
// // //             }
// // //             else
// // //             {
// // //                 value += ((capacity) / res[i].first) * res[i].second;
// // //                 break;
// // //             }
// // //         }
// // //         cout << value << endl;
// // //     }
// // // }
// // #include <iostream>
// // #include <vector>
// // #include <algorithm>

// // using namespace std;

// // struct Item
// // {
// //     int weight;
// //     int value;
// //     double density;
// // };

// // bool cmp(Item a, Item b)
// // {
// //     return a.density > b.density;
// // }

// // double fractionalKnapsack(int W, vector<Item> &items)
// // {
// //     sort(items.begin(), items.end(), cmp);

// //     int n = items.size();
// //     int value = 0;
// //     int weight = 0;

// //     for (int i = 0; i < n; i++)
// //     {
// //         if (weight + items[i].weight <= W)
// //         {
// //             weight += items[i].weight;
// //             value += items[i].value;
// //         }
// //         else
// //         {
// //             int remaining_weight = W - weight;
// //             value += items[i].density * remaining_weight;
// //             break;
// //         }
// //     }

// //     return value;
// // }

// // int main()
// // {
// //     int W; // capacity of the knapsack
// //     int n; // number of items
// //     cin >> n >> W;

// //     vector<Item> items(n);
// //     for (int i = 0; i < n; i++)
// //     {
// //         cin >> items[i].weight >> items[i].value;
// //         items[i].density = (double)items[i].value / (double)items[i].weight;
// //     }

// //     double result = fractionalKnapsack(W, items);

// //     cout << "Maximum value in the knapsack: " << result << endl;

// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string res = "Hello World";
//     cout << res.back() << endl;
//     return 0;
// }
#include <bits/stdc++.h> /*    Following is Binary Tree Node structure:    class TreeNode    {    public:        int data;        TreeNode *left, *right;        TreeNode() : data(0), left(NULL), right(NULL) {}        TreeNode(int x) : data(x), left(NULL), right(NULL) {}        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}    }; */ //function to get predecessor
TreeNode *findPredecessor(TreeNode *root)
{
    TreeNode *curr = root->left;
    while (curr->right != NULL && curr->right != root)
    {
        curr = curr->right;
    }
    return curr;
}

// Morris traversal function
void inorderMorrisTraversal(TreeNode *root, vector<int> &ans)
{
    TreeNode *curr = root;
    while (curr != NULL)
    {
        if (curr->left == NULL)
        {
            ans.push_back(curr->data);
            curr = curr->right;
        }
        else
        {
            TreeNode *predecessor = findPredecessor(curr);
            if (predecessor->right == NULL)
            {
                predecessor->right = curr;
                curr = curr->left;
            }
            else if (predecessor->right == curr)
            {
                predecessor->right = NULL;
                ans.push_back(curr->data);
                curr = curr->right;
            }
        }
    }
}

vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    inorderMorrisTraversal(root, ans);
    return ans;
}