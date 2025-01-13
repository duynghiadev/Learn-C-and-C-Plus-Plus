#include <iostream>

using namespace std;

int main()
{
  // cout << "Hello các bạn đến với khóa học C++\n";
  // cout << "Đây là chuỗi xuống hàng";

  // khai báo biến
  double toan, van, dtb;

  // xuất dữ liệu dùng cout <<
  cout << "nhập vào điểm Toán\n";

  // nhập dữ liệu dùng cin >>
  cin >> toan;
  cout << "nhập vào điểm Văn\n";
  cin >> van;

  // tính điểm trung bình
  dtb = (toan + van) / 2;

  // xuất kết quả
  cout << "Điểm trung bình: " << dtb << "\n";
}
