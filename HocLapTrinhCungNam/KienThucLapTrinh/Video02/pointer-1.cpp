#include <iostream>
#include <string>

using namespace std;

// Code này từ phút 44:30

struct Person {
    int age;
};

void print(Person p) {
    cout << "Age: " << p.age << endl;
}

Person person;

int main() {
    person.age = 99;

    Person person1;
    person1.age = 10;

    Person *p1;
    p1 = &person1;

    print(person1);
    print(person);

    cout << "person1: " << &person1 << endl;
    cout << "person: " << &person << endl;
}
