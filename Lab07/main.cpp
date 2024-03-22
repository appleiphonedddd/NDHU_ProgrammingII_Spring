class Segment
{
public:
    Segment(Point _p1, Point _p2) : p1(_p1), p2(_p2) {}

    double length()
    {
        double dx = p2.getX() - p1.getX();
        double dy = p2.getY() - p1.getY();
        return sqrt(dx * dx + dy * dy);
    }

    Point getEnd(int choice)
    {
        if (choice == 0)
            return p1;
        else
            return p2;
    }

private:
    Point p1, p2;
};