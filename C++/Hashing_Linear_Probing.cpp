#include <bits/stdc++.h>
using namespace std;
struct slot
{
    int key;
    int value;
};
struct hashtable_slot
{
    int flag;
    struct stot *next;
};
struct hastable_slot *arr;
int size = 0;
int maxCap = 10;
void InitalizeArray()
{
    for (int i = 0; i < maxCap; i++)
    {
        arr[i].flag = 0;
        arr[i].record = NULL;
    }
}
void Insert(int key, int value)
{
    int index = key % maxCap;
    int i = index;
    struct slot *item = (struct slot *)malloc(sizeof(struct slot));
    item->key = key;

    item->value = value;
    while (arr[i].flag == 1)
    {
        if (arr[i].record->key == key)
        {
            cout << "Duplicates are not allowed " << endl;
            return;
        }
        i = (i + 1) % maxCap;
        if (i == index)
        {
            cout << "Hash Table is Full" << endl;
            return;
        }
        arr[i].flag = 1;
        arr[i].record = item;
        size++;
    }
}
int searchElement(int key)
{
    int index = key % maxCap;
    int i = index;
    while (arr[i].flag != 0)
    {
        if (arr[i].record->key == key)
            return 1;
        i = (i + 1) % maxCap;
        if (i == index)
        {
            return 0;
        }
    }
    return 0;
}
void Display()
{
    for (int i = 0; i < maxCap; i++)
    {
        struct slot *temp = (struct slot *)arr[i].record;
        if (temp == NULL)
        {
            cout << "Hash Table has no elements " << endl;
        }
        else
        {
            cout << "Hash table slot : " << endl;
            cout << "Key : " << temp->key << " Value : " << temp->value << endl;
        }
    }
}
int getSize()
{
    return size;
}
int main()
{
}