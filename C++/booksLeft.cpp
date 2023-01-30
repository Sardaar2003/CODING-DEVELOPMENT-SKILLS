#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numberOfBooks;
    int numberOfChapters;
    cin >> numberOfBooks >> numberOfChapters;
    int countLeft = 0;
    int countRight = 0;
    vector<int> books;
    for (int i = 0; i < numberOfBooks; i++)
    {
        int element;
        cin >> element;
        books.push_back(element);
    }
    for (int i = 0; i < numberOfBooks; i++)
    {
        if (books[i] < numberOfChapters)
            countLeft++;

        else if (books[i] > numberOfChapters)
            break;
    }
    for (int i = numberOfBooks - 1; i >= 0; i--)
    {
        if (books[i] < numberOfChapters)
            countRight++;
        else if (books[i] > numberOfChapters)
            break;
    }
    int availableBooks = numberOfBooks - max(countLeft, countRight);
    cout << availableBooks << endl;
}