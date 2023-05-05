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
double dotProduct(Point A, Point B, Point C)
{
    double x1 = B.x - A.x;
    double y1 = B.y - A.y;
    double x2 = C.x - A.x;
    double y2 = C.y - A.y;
    return abs((x1 * y1) + (x2 * y2));
}
double CrossProduct(Point A, Point B, Point C)
{
    double x1 = B.x - A.x;
    double y1 = B.y - A.y;
    double x2 = C.x - A.x;
    double y2 = C.y - A.y;
    return (x1 * y2) - (x2 * y1);
}
double distance(Point A, Point B)
{
    double d1 = B.x - A.x;
    double d2 = B.y - A.y;
    return sqrt(d1 * d1 + d2 * d2);
}
double AreaOfPolygon(Line lines, int n)
{
    double area = 0;
    for (int i = 1; i < n - 1; i++)
    {
        area += CrossProduct(lines.points[0], lines.points[i], lines.points[i + 1]);
    }
    return abs(area / 2);
}
double LineDistance(Line lines, bool isLineSegment)
{
    double dist1 = CrossProduct(lines.points[0], lines.points[1], lines.points[2]) / (distance(lines.points[0], lines.points[1]));
    if (isLineSegment)
    {
        double dist2 = dotProduct(lines.points[0], lines.points[1], lines.points[2]);
        if (dist2 > 0)
        {
            return abs(distance(lines.points[1], lines.points[2]));
        }
        double dist3 = dotProduct(lines.points[1], lines.points[0], lines.points[2]);
        if (dist3 > 0)
        {
            return abs(distance(lines.points[0], lines.points[2]));
        }
    }
    return abs(dist1);
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
    // cout << "Dot Products : " << dotProduct(lines.points[0], lines.points[1], lines.points[2]) << endl;
    // cout << "Cross Products : " << CrossProduct(lines.points[0], lines.points[1], lines.points[2]) << endl;
    // cout << "Line Segment Off : " << LineDistance(lines, false) << endl;
    // cout << "Line Segment On : " << LineDistance(lines, true) << endl;
    cout << "Area of the Polygon " << AreaOfPolygon(lines, n) << endl;

    return 0;
}