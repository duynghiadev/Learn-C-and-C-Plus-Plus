#include <iostream>
#include <climits>

using namespace std;

int main()
{
  // xuất giới hạn các kiểu dữ liệu
  cout << "max của kiểu int là: " << INT_MAX << endl;
  cout << "min của kiểu int là:" << INT_MIN << endl;

  cout << "min của kiểu short là:" << SHRT_MAX << endl;
  cout << "min của kiểu short là:" << SHRT_MIN << endl;

  // khai báo
  int toan;
  float diemToan;
  double tienLuong;
  // khai báo nhiều biến có cùng kiểu dữ liệu
  int a, b, c, d;

  // khởi tạo
  bool check = true;
  char kyTu = 'a'; // ký tự là nháy đơn, còn chuỗi là nháy kép
  int canNang = 72;
  float diemVan = 9.5f; // kiểu float thì phải có chữ f phía sau các con số
  float diemAnh = 9.5F; // cũng được
  float diemSinh = 9.5; // cũng được

  short test = 32768;
  cout << "Giá trị của test là: " << test << endl;

  // kiểm tra kiểu dữ liệu của biến
  cout << typeid(diemVan).name();
}