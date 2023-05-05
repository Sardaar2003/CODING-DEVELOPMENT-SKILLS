#include <iostream>
using namespace std;

struct Point
{
    double x, y;
};

struct Line
{
    Point p1, p2;
};

double crossProduct(Point a, Point b)
{
    return a.x * b.y - b.x * a.y;
}

double dotProduct(Point a, Point b)
{
    return a.x * b.x + a.y * b.y;
}

double distance(Point a, Point b)
{
    double dx = a.x - b.x, dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

bool onSegment(Point p, Line l)
{
    return (p.x >= min(l.p1.x, l.p2.x) && p.x <= max(l.p1.x, l.p2.x) &&
            p.y >= min(l.p1.y, l.p2.y) && p.y <= max(l.p1.y, l.p2.y));
}

Point getIntersection(Line l1, Line l2)
{
    Point p1 = l1.p1, p2 = l1.p2, p3 = l2.p1, p4 = l2.p2;
    double cp1 = crossProduct({p4.x - p3.x, p4.y - p3.y}, {p1.x - p3.x, p1.y - p3.y});
    double cp2 = crossProduct({p4.x - p3.x, p4.y - p3.y}, {p2.x - p3.x, p2.y - p3.y});
    double cp3 = crossProduct({p2.x - p1.x, p2.y - p1.y}, {p3.x - p1.x, p3.y - p1.y});
    double cp4 = crossProduct({p2.x - p1.x, p2.y - p1.y}, {p4.x - p1.x, p4.y - p1.y});
    if (((cp1 > 0 && cp2 < 0) || (cp1 < 0 && cp2 > 0)) &&
        ((cp3 > 0 && cp4 < 0) || (cp3 < 0 && cp4 > 0)))
    {
        double d = dotProduct({p2.x - p1.x, p2.y - p1.y}, {p4.x - p3.x, p4.y - p3.y});
        double u = (crossProduct({p3.x - p1.x, p3.y - p1.y}, {p4.x - p3.x, p4.y - p3.y}) / d);
        return {p1.x + u * (p2.x - p1.x), p1.y + u * (p2.y - p1.y)};
    }
    return {0, 0};
}

int main()
{
    Line l1, l2;
    cout << "Enter the start and end points of line 1: ";
    cin >> l1.p1.x >> l1.p1.y >> l1.p2.x >> l1.p2.y;
    cout << "Enter the start and end points of line 2: ";
    cin >> l2.p1.x >> l2.p1.y >> l2.p2.x >> l2.p2.y;

    Point p = getIntersection(l1, l2);

    if (p.x == 0 && p.y == 0)
    {
        cout << "The two line segments do not intersect.\n";
    }
    else if (onSegment(p, l1) && onSegment(p, l2))
    {
        cout << "The intersection is possible" << endl;
    }
