#include <iostream>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        int numberOfElement;
        cin >> numberOfElement;
        string stringValue;
        char stringArray[11];
        cin >> stringValue;
        for (int i = 0; i < 11; i++)
        {
            stringArray[i] = stringValue[i];
        }
        for (int j = 0; j < numberOfElement - 1; j++)
        {
            string ValueData;
            cin >> ValueData;
            for (int k = 0; k < 11; k++)
            {
                if (ValueData[k] == '1' && stringArray[k] == '1')
                {
                    stringArray[k] = '0';
                }
                else if (ValueData[k] == '1' && stringArray[k] == '0')
                {
                    stringArray[k] = '1';
                }
            }
        }
        int countHead = 0;
        for (int i = 0; i < 11; i++)
        {
            if (stringArray
                    [i] == '1')
            {
                countHead++;
            }
        }
        cout << countHead << endl;
    }
}