#include <bits/stdc++.h>
using namespace std;
class Points
{
public:
    double x, y;
};
class Line
{
public:
    Points *points;
    Line(int coordinates)
    {
        points = new Points[coordinates];
    }
};
double dotProduct(Points A, Points B, Points C)
{
    double x1 = B.x - A.x;
    double y1 = B.y - A.y;
    double x2 = C.x - A.x;
    double y2 = C.y - A.y;
    return abs(x1 * y1 + x2 * y2);
}
double crossProduct(Points A, Points B, Points C)
{
    double x1 = B.x - A.x;
    double y1 = B.y - A.y;
    double x2 = C.x - A.x;
    double y2 = C.y - A.y;
    return abs(x1 * y2 - x2 * y1);
}
int main()
{
    int n;
    cin >> n;
    Line line(n);
    for (int i = 0; i < n; i++)
    {
        cin >> line.points[i].x;
        cin >> line.points[i].y;
    }
    cout << "The cross product of the line : " << crossProduct(line.points[0], line.points[1], line.points[2]) << endl;
    return 0;
}
