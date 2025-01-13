#include <iostream>
using namespace std;
int main()
{
  int a = 6;
  int a1 = a;
  int a2 = a;
  int a3 = a;
  int a4 = a;
  int b = 2;
  cout << "a=" << (a += 3) << endl;
  cout << "a=" << (a1 -= 5) << endl;
  cout << "a=" << (a2 *= 2) << endl;
  cout << "a=" << (a3 %= 5) << endl;
  cout << "a-=b=" << (a4 -= (b += 7)) << endl;
}