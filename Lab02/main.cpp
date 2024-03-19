#include <iostream>
#include <cmath>

using namespace std;

class Point
{
    double x, y;

public:
    void setX(double _x)
    {
        x = _x;
    }

    void setY(double _y)
    {
        y = _y;
    }

    double getX()
    {
        return x;
    }

    double getY()
    {
        return y;
    }
};

class Triangle
{
    Point a, b, c;

public:
    void setPoints(double x1, double y1, double x2, double y2, double x3, double y3)
    {
        a.setX(x1);
        a.setY(y1);
        b.setX(x2);
        b.setY(y2);
        c.setX(x3);
        c.setY(y3);
    }

    double distance(Point p1, Point p2)
    {
        return sqrt(pow(p1.getX() - p2.getX(), 2) + pow(p1.getY() - p2.getY(), 2));
    }

    double perimeter()
    {
        double ab = distance(a, b);
        double bc = distance(b, c);
        double ca = distance(c, a);
        return ab + bc + ca;
    }
};

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        double x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        Triangle triangle;
        triangle.setPoints(x1, y1, x2, y2, x3, y3);

        cout << triangle.perimeter() << endl;
    }

    return 0;
}
