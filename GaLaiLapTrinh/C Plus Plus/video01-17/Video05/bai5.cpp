#include <iostream>

using namespace std;

int main()
{
  // 1.  ép kiểu rộng (ép từ bé sang kiểu lớn hơn) -> không lo mất dữ liệu
  short a = 10;
  // xuất ra giá trị của a
  cout << "Giá trị của a = " << a << endl;

  // khai báo biến b là kiểu int
  int b;
  b = a;      // ép tắt
  b = (int)a; // ép tường minh
  cout << "Giá trị của b = " << b << endl;

  // 2. ép kiểu hẹp sang thằng lớn hơn
  float soA = 1.25f;
  int soB;
  soB = soA;      // ép tắt
  soB = (int)soA; // ép tường minh
  cout << "Giá trị của soA = " << soA << endl;
  cout << "Giá trị của soB = " << soB << endl;

  // giải thích có thể mất dữ liệu
  int c = 500000;
  short d = c;
  cout << "Giá trị của c = " << c << endl;
  cout << "Giá trị của d = " << d << endl;

  int c1 = 5000;
  short d1 = c1;
  cout << "Giá trị của c1 = " << c1 << endl;
  cout << "Giá trị của d1 = " << d1 << endl;
}
