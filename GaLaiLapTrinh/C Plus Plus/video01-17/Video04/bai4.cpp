#include <iostream>

using namespace std;

int main()
{
  // 1. khai báo hằng
  const int DOSOI = 100;
  const int DODONG = 0;

  cout << "Nhiệt độ sôi = " << DOSOI << endl;
  cout << "Nhiệt độ đông = " << DODONG << endl;

  // 2. type promotion
  int a = 8;
  double b = 7.5;
  // xuất thử a + b
  cout << "a+b= " << a + b << endl;

  // khai báo biến kq để nhận kết quả là tổng
  int kq;
  kq = a + b;
  // xuất thử kq
  cout << "a+b= " << kq << endl;

  double kq2;
  kq2 = a + b;
  // xuất thử kq2
  cout << "a+b= " << kq2 << endl;
}
