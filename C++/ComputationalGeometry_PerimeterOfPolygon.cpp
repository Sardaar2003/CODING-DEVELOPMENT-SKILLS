#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
class Points
{
public:
    double x, y;
};
class Line
{
public:
    Points *point;
    Line(int n)
    {
        point = new Points[n];
    }
};
double distance(double x, double y, double x1, double y1)
{
    int d1 = (x1 - x);
    int d2 = (y1 - y);
    return sqrt(d1 * d1 + d2 * d2);
}
int main()
{
    int n;
    cin >> n;
    Line lines(n);
    double perimeter = 0.00;
    for (int i = 0; i < n; i++)
    {
        cin >> lines.point[i].x >> lines.point[i].y;
    }

    for (int i = 0; i < n - 1; i++)
    {
        // double value = abs(lines.point[i].x - lines.point[i + 1].x) + abs(lines.point[i].y - lines.point[i + 1].y);
        // cout << lines.point[i].x << " " << lines.point[i].y << " " << lines.point[i + 1].x << " " << lines.point[i + 1].y << " " << value << endl;
        perimeter += distance(lines.point[i].x, lines.point[i].y, lines.point[i + 1].x, lines.point[i + 1].y);
    }
    perimeter += distance(lines.point[0].x, lines.point[0].y, lines.point[n - 1].x, lines.point[n - 1].y);
    // perimeter += abs(lines.point[0].x - lines.point[n - 1].x) + abs(lines.point[0].y - lines.point[n - 1].y);
    cout << fixed << setprecision(3) << static_cast<double>(perimeter) << endl;
    return 0;
}