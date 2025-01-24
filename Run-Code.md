# Hướng dẫn chạy chương trình C++ trong Visual Studio Code

## Yêu cầu chuẩn bị

- Đã cài đặt **Visual Studio Code**.
- Đã cài đặt **g++ compiler** (đối với Mac và Linux thường được cài sẵn; với Windows, bạn có thể cài **MinGW**).

## 1. Chạy chương trình C++ có nhập dữ liệu từ bàn phím

Nếu chương trình C++ yêu cầu nhập dữ liệu từ bàn phím, hãy làm theo các bước sau:

1. **Mở Terminal trong Visual Studio Code**:

   - Nhấn `Ctrl + ~` (hoặc `Cmd + ~` trên Mac) để mở Terminal.

2. **Biên dịch file C++**:

   - Giả sử file C++ của bạn có tên là `main.cpp`.
   - Chạy lệnh sau trong Terminal để biên dịch và tạo file đầu ra với tên tùy chỉnh:

     ```bash
     g++ main.cpp -o main.exe
     ```

   - Lệnh này sẽ tạo một file thực thi tên là `main.exe` (hoặc `main.exe` trên Windows).

3. **Chạy chương trình**:

   - Nhập lệnh sau để chạy chương trình:

     ```bash
     ./main.exe
     ```

     Chương trình sẽ chạy và cho phép bạn nhập dữ liệu từ bàn phím khi được yêu cầu.

## 2. Chạy chương trình C++ không yêu cầu nhập dữ liệu từ bàn phím

Với các chương trình không yêu cầu nhập dữ liệu từ bàn phím, bạn có thể sử dụng **Code Runner** để chạy nhanh hơn.

1. **Cài đặt các Extension cần thiết**:

   - Mở **Extensions** trong Visual Studio Code và cài đặt:
     - [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)
     - [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)

2. **Chạy chương trình**:

   - Mở file C++ của bạn và nhấn **Run Code** (hoặc sử dụng phím tắt `Ctrl + Alt + N`).
   - Code Runner sẽ tự động biên dịch và chạy chương trình trong terminal.

---

**Lưu ý**:

- Nếu chương trình yêu cầu nhập liệu từ bàn phím, bạn nên sử dụng cách thủ công như hướng dẫn ở mục 1 để đảm bảo chương trình có thể xử lý nhập liệu đúng cách.
- Bạn có thể điều chỉnh tên file đầu ra theo cách thủ công mỗi lần bằng lệnh `-o <tên_file>` khi biên dịch với `g++`.
