#include <iostream>
using namespace std;
class Marks
{
public:
    int PAT[7];
    void get_data()
    {
        for (int i = 0; i < 7; i++)
        {
            cin >> PAT[i];
        }
    }
};
class Average : public Marks
{
public:
    float average;
    void average_data()
    {
        average = 0;
        for (int i = 0; i < 7; i++)
        {
            average += PAT[i];
        }
        average /= 7;
        cout << "Average Marks : " << average << endl;
    }
};
class Rank : public Average
{
public:
    void sorting_rank()
    {
        int temp;
        for (int i = 0; i < 7; i++)
        {
            for (int j = i + 1; j < 7; j++)
            {
                if (PAT[i] > PAT[j])
                {
                    temp = PAT[i];
                    PAT[i] = PAT[j];
                    PAT[j] = temp;
                }
            }
        }
        cout << "The heightest Marks : 1 : " << PAT[6] << endl;
        cout << "The heightest Marks : 2 : " << PAT[5] << endl;
    }
};
int main()
{
    Rank student1;
    student1.get_data();
    student1.average_data();
    student1.sorting_rank();
    return 0;
}