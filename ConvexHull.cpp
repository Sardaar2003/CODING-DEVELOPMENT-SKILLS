#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Point
{
    int x, y;
};

int orientation(Point p, Point q, Point r)
{
    int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if (val == 0)
        return 0;
    return (val > 0) ? 1 : 2;
}

vector<Point> convexHull(vector<Point> points)
{
    int n = points.size();
    if (n <= 3)
        return points;
    vector<Point> hull;
    int l = 0;
    for (int i = 1; i < n; i++)
    {
        if (points[i].x < points[l].x)
            l = i;
    }
    int p = l, q;
    do
    {
        hull.push_back(points[p]);
        q = (p + 1) % n;
        for (int i = 0; i < n; i++)
        {
            if (orientation(points[p], points[i], points[q]) == 2)
                q = i;
        }
        p = q;
    } while (p != l);
    return hull;
}

int main()
{
    int n;
    cout << "Enter the number of points: ";
    cin >> n;
    vector<Point> points(n);
    cout << "Enter the coordinates of each point:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> points[i].x >> points[i].y;
    }
    vector<Point> hull = convexHull(points);
    cout << "The points on the convex hull are:\n";
    for (int i = 0; i < hull.size(); i++)
    {
        cout << hull[i].x << " " << hull[i].y << "\n";
    }
    return 0;
}
