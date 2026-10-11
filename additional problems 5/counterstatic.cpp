#include <iostream>
using namespace std;

class Counter {
    static int total;
    static int alive;

public:
    Counter() {
        total++;
        alive++;
    }

    ~Counter() {
        alive--;
    }

    static void showCount() {
        cout << "Total objects created: " << total << endl;
        cout << "Currently alive: " << alive << endl;
    }
};

int Counter::total = 0;
int Counter::alive = 0;

int main() {
    Counter c1, c2;

    Counter::showCount();

    {
        Counter c3;
        Counter::showCount();
    }

    cout << "After destroying c3:" << endl;
    Counter::showCount();

    return 0;
}