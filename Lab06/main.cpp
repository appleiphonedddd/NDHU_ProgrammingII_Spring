#include <iostream>
#include <vector>

using namespace std;

class Point
{
public:
    Point(double x, double y) : x(x), y(y) {}
    virtual ~Point() {}

    double getX() const { return x; }
    double getY() const { return y; }

private:
    double x;
    double y;
};

int main()
{
    int number;
    double X, Y;

    cin >> number;

    vector<Point> points;

    for (int i = 0; i < number; ++i) {
        cin >> X >> Y;

        points.push_back(Point(X, Y));
    }

    for (int i = 0; i < number; ++i) {
        cout << "(" << points[i].getX() << ", " << points[i].getY() << ")" << endl;
    }

    return 0;
}
