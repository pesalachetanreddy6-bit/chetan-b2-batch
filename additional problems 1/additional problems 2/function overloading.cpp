#include <iostream>
using namespace std;

class Volume
{
public:
    // Cube
    int volume(int side)
    {
        return side * side * side;
    }

    // Cuboid
    int volume(int length, int breadth, int height)
    {
        return length * breadth * height;
    }

    // Cylinder
    double volume(double radius, double height)
    {
        return 3.14159 * radius * radius * height;
    }
};

int main()
{
    Volume v;

    cout << "Volume of cube = " << v.volume(5) << endl;
    cout << "Volume of cuboid = " << v.volume(4, 5, 6) << endl;
    cout << "Volume of cylinder = " << v.volume(3.0, 7.0) << endl;

    return 0;
}