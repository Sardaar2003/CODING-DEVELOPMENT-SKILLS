#include <bits/stdc++.h>
using namespace std;
struct Product
{
    float weight;
    float profit;
    float profitByWeight;
    // Product(double weight, double profit)
    // {
    //     this->profit = profit;
    //     this->weight = weight;
    //     this->profitByWeight = profit / weight;
    // }
};
bool comp(Product a, Product b)
{
    return a.profitByWeight > b.profitByWeight;
}
void fractionKnapSackProblem(Product array[], int size, float capacity)
{
    sort(array, array + size, comp);
    int i = 0;
    float totalProfit = 0.0;
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i].weight <= capacity && capacity > 0)
        {
            capacity -= array[i].weight;
            totalProfit += array[i].profit;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        totalProfit += (array[i].profit * (capacity / array[i].weight));
    }
    cout << totalProfit << endl;
}
int main()
{
    int size;
    cin >> size;
    float capacity;
    cin >> capacity;
    float weight[size];
    float profit[size];
    for (int i = 0; i < size; i++)
    {
        cin >> weight[i];
    }
    for (int i = 0; i < size; i++)
    {
        cin >> profit[i];
    }
    Product array[size];
    for (int i = 0; i < size; i++)
    {
        array[i].weight = weight[i];
        array[i].profit = profit[i];
        array[i].profitByWeight = profit[i] / weight[i];
    }
    fractionKnapSackProblem(array, size, capacity);
}