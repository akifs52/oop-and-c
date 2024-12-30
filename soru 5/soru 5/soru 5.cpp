
#include <iostream>
using namespace std;


class regularPolygon
{
private:
    int n;
    double s;
    double area;
    double angle;
public:
    regularPolygon(int n, double s) :n(n), s(s)
    {
        area = 0.5 * n * sin(360 / n) * s * s;
        angle = ((n - 2) * 180) / n;
        cout << "A regular polygon with " << n << " sides and " << s << " length is created.\n";
        cout << "Its area is " << area << " and its angle is " << angle << ".\n";
    }

    double getArea()
    {
        return area;
    }

    double getAngle()
    {
        return angle;
    }

    void incrementSides()
    {
        regularPolygon newPolygon(n + 1, s);

        area = newPolygon.area;
        angle = newPolygon.angle;
        cout << "The number of sides is incremented by one.\n";
        cout << "The new area is " << area << " and the new angle is " << angle << ".\n";
    }
   
}t;

int main()
{
    
    return 0;
}