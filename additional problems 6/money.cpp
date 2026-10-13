#include <iostream>
using namespace std;

class Money {
    int rupees, paise;

public:
    Money(int r = 0, int p = 0) {
        rupees = r + p / 100;
        paise = p % 100;
    }

    Money operator+(const Money &m) const {
        return Money(rupees + m.rupees, paise + m.paise);
    }

    Money operator-(const Money &m) const {
        int total1 = rupees * 100 + paise;
        int total2 = m.rupees * 100 + m.paise;
        int diff = total1 - total2;

        return Money(diff / 100, diff % 100);
    }

    void display() const {
        cout << rupees << " rupees " << paise << " paise";
    }
};

int main() {
    Money m1(10, 80), m2(5, 50);

    cout << "Money 1: ";
    m1.display();

    cout << "\nMoney 2: ";
    m2.display();

    Money sum = m1 + m2;
    cout << "\nAddition: ";
    sum.display();

    Money diff = m1 - m2;
    cout << "\nSubtraction: ";
    diff.display();

    return 0;
}