#include <iostream>
using namespace std;

int main()
{
  // Khai báo các biến
  double i1, i2, i3;
  i1 = 2;
  i2 = 5;
  i3 = -3;
  double d1, d2, d3;
  d1 = 2.0;
  d2 = 5.0;
  d3 = -0.5;

  // a, i1 + (i2 * i3)
  cout << "a, i1 + (i2 * i3) = " << i1 << " + (" << i2 << " * " << i3 << ") = " << i1 + (i2 * i3) << endl;

  // b, i1 * (i2 + i3)
  cout << "b, i1 * (i2 + i3) = " << i1 << " * (" << i2 << " + " << i3 << ") = " << i1 * (i2 + i3) << endl;

  // c, i1 / (i2 + i3)
  cout << "c, i1 / (i2 + i3) = " << i1 << " / (" << i2 << " + " << i3 << ") = " << i1 / (i2 + i3) << endl;

  // e, i1 / i2 + i3 (ép kiểu để đảm bảo kết quả chính xác)
  cout << "e, i1 / i2 + i3 = " << i1 << " / " << i2 << " + " << i3 << " = " << (double)i1 / i2 + i3 << endl;

  // g, 3 + 4 + 5 / 3 (ép kiểu để đảm bảo kết quả chính xác)
  cout << "g, 3 + 4 + 5 / 3 = 3 + 4 + 5 / 3 = " << 3 + 4 + (double)5 / 3 << endl;

  // i, (3 + 4 + 5) / 3
  cout << "i, (3 + 4 + 5) / 3 = (" << 3 << " + " << 4 << " + " << 5 << ") / 3 = " << (3 + 4 + 5) / 3 << endl;

  // k, d1 + (d2 * d3)
  cout << "k, d1 + (d2 * d3) = " << d1 << " + (" << d2 << " * " << d3 << ") = " << d1 + (d2 * d3) << endl;

  // l, d1 + d2 * d3
  cout << "l, d1 + d2 * d3 = " << d1 << " + " << d2 << " * " << d3 << " = " << d1 + d2 * d3 << endl;

  // m, d1 / d2 - d3
  cout << "m, d1 / d2 - d3 = " << d1 << " / " << d2 << " - " << d3 << " = " << d1 / d2 - d3 << endl;

  // n, d1 / (d2 - d3)
  cout << "n, d1 / (d2 - d3) = " << d1 << " / (" << d2 << " - " << d3 << ") = " << d1 / (d2 - d3) << endl;

  // o, d1 + d2 + d3 / 3
  cout << "o, d1 + d2 + d3 / 3 = " << d1 << " + " << d2 << " + " << d3 << " / 3 = " << d1 + d2 + d3 / 3 << endl;

  // p, (d1 + d2 + d3) / 3
  cout << "p, (d1 + d2 + d3) / 3 = (" << d1 << " + " << d2 << " + " << d3 << ") / 3 = " << (d1 + d2 + d3) / 3 << endl;

  // q, d1 + d2 + (d3 / 3)
  cout << "q, d1 + d2 + (d3 / 3) = " << d1 << " + " << d2 << " + (" << d3 << " / 3) = " << d1 + d2 + (d3 / 3) << endl;

  // r, 3 * (d1 + d2) * (d1 - d3)
  cout << "r, 3 * (d1 + d2) * (d1 - d3) = 3 * (" << d1 << " + " << d2 << ") * (" << d1 << " - " << d3 << ") = " << 3 * (d1 + d2) * (d1 - d3) << endl;

  return 0;
}
