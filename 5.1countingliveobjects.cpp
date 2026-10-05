#include <iostream>
using namespace std;

class Widget
{
    int id;
    static int count;   // Shared by all objects

public:
    Widget()
    {
        id = ++count;
        cout << "Created " << id << endl;
    }

    ~Widget()
    {
        cout << "Destroyed " << id << endl;
        --count;
    }

    static int alive()
    {
        return count;
    }
};

// Static member definition
int Widget::count = 0;

int main()
{
    Widget a, b;

    cout << "Alive = " << Widget::alive() << endl;

    {
        Widget c;

        cout << "Alive = " << Widget::alive() << endl;
    }

    cout << "Alive = " << Widget::alive() << endl;

    return 0;
}