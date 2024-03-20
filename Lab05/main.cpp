#include <iostream>
#include <algorithm> // For std::swap

using namespace std;

// Class to represent a segment
class Segment
{
public:
    int start, end;

    // Constructor to initialize a segment with two points
    Segment(int start, int end)
    {
        // Ensure the start is always less than or equal to end
        if (start > end)
        {
            swap(start, end);
        }
        this->start = start;
        this->end = end;
    }

    // Method to check if this segment overlays with another segment
    bool overlaysWith(const Segment &other) const
    {
        // Two segments overlay if one's start is between the other's start and end
        // or one's end is between the other's start and end
        return (this->start <= other.end && other.start <= this->end);
    }
};

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    // Create two Segment objects
    Segment s1(x1, y1);
    Segment s2(x2, y2);

    // Determine if the two segments overlay
    if (s1.overlaysWith(s2))
    {
        cout << "overlay" << endl;
    }
    else
    {
        cout << "no overlay" << endl;
    }

    return 0;
}
