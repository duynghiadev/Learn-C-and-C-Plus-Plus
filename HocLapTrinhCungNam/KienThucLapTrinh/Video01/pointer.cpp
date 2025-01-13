#include <iostream>
#include <string>

using namespace std;

int g1 = 10;
int g2 = 20;

void f2() {
    int l21 = 1246546789;
    int l22 = 1246546789;

    cout << "l21: " << &l21 << endl;
    cout << "l22: " << &l22 << endl;
}

void f1() {
    long l1 = 965145789;
    long l2 = 1246546789;

    cout << "l1: " << &l1 << endl;
    cout << "l2: " << &l2 << endl;

    f2();
}

int main() {
    cout << "g1: " << &g1 << endl;
    cout << "g2: " << &g2 << endl;

    f1();
}