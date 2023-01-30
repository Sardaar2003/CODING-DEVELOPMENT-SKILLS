#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    int currentFloor = 0;
    int sourceFloor = 0;
    int destinationFloor = 0;
    long long totalDistance = 0;
    int numberOfFloors = 0;
    int Queries = 0;
    for (int i = 1; i <= testCases; i++)
    {
        cin >> numberOfFloors >> Queries;
        for (int j = 1; j <= Queries; j++)
        {
            cin >> sourceFloor >> destinationFloor;
            totalDistance += abs(currentFloor - sourceFloor) + abs(sourceFloor - destinationFloor);
            currentFloor = destinationFloor;
        }
        cout << totalDistance << endl;
    }
}