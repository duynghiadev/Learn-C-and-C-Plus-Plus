#include <iostream>
#include <string>

using namespace std;

struct Person {
    int age;
};

void print(Person p) {
    cout << "Age: " << p.age << endl;
}

int main() {
    Person person1;
    person1.age = 10;

    Person *p1;
    p1 = &person1;

    print(person1);
    print(*p1);
    cout << "p1: " << p1 << endl;

    Person *p2 = p1;
    cout << "p2: " << p2 << endl;

    p2->age = 5;
    printf("person1: Age: %d\n", person1.age);
    printf("*p1: Age: %d\n", p1->age);
}
