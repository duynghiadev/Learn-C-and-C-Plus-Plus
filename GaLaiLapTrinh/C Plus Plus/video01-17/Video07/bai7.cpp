#include <iostream>
using namespace std;
int main()
{
  // toán tử gán
  int x = 8;
  x += 5; // x=x+5
  cout << "x= " << x << endl;

  // gán trừ =
  int x2 = 8;
  x2 -= 5;
  cout << "x2= " << x2 << endl;

  // gán nhân =
  int x3 = 8;
  x3 *= 5;
  cout << "x3= " << x3 << endl;

  // gán chia =
  double x4 = 8;
  x4 /= 5;
  cout << "x4= " << x4 << endl;

  // gán chia lấy dư =
  int x5 = 8;
  x5 %= 5;
  cout << "x5= " << x5 << endl;

  // các phép so sánh
  int a = 1;
  int b = 3;

  cout << (a == b) << endl;
  cout << (a != b) << endl;
  cout << (a < b) << endl;
  cout << (a <= b) << endl;
  cout << (a > b) << endl;
  cout << (a >= b) << endl;
}
