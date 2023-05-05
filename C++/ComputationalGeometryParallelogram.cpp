#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
class Point
{
public:
    double x, y;
};
class Line
{
public:
    Point *points;
    Line(int coordinates)
    {
        points = new Point[coordinates];
    }
};

double CrossProduct(Point A, Point B, Point C)
{
    double x1 = B.x - A.x;
    double y1 = B.y - A.y;
    double x2 = C.x - A.x;
    double y2 = C.y - A.y;
    return (x1 * y2) - (x2 * y1);
}

int main()
{
    int n;
    cin >> n;
    Line lines(n);
    for (int i = 0; i < n; i++)
    {
        cin >> lines.points[i].x >> lines.points[i].y;
    }
    int count = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (CrossProduct(lines.points[0], lines.points[i], lines.points[i + 1]) > 0)
            count++;
    }
    cout << count << endl;
    // cout << fixed << setprecision(3) << static_cast<double>(AreaOfPolygon(lines, n)) << endl;

    return 0;
}