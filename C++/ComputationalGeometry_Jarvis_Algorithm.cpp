#include <bits/stdc++.h>
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
bool CrossProduct(Point A, Point B, Point C)
{
    double x1 = B.x - A.x;
    double y1 = B.y - A.y;
    double x2 = C.x - A.x;
    double y2 = C.y - A.y;
    return (x1 * y2) - (x2 * y1) > 0;
}
void convexHull(Line lines, int n)
{
    vector<Point> conHull;
    int leftPoint = 0;
    for (int i = 1; i < n; i++)
    {
        if (lines.points[i].x < lines.points[leftPoint].x)
        {
            leftPoint = i;
        }
    }
    int p = leftPoint;
    do
    {
        conHull.emplace_back(lines.points[p]);
        int q = (p + 1) % n;
        for (int r = 0; r < n; r++)
        {
            if (CrossProduct(lines.points[p], lines.points[q], lines.points[r]))
            {
                q = r;
            }
        }
        p = q;
    } while (p != leftPoint);
    cout << "Output :" << endl;
    for (int i = 0; i < conHull.size(); i++)
    {
        cout << conHull[i].x << " " << conHull[i].y << endl;
    }
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
    convexHull(lines, n);
    return 0;
}