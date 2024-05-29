#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int &b = a;


    cout << "Giá trị của biến a: " << a << endl;
    cout << "Giá trị của tham chiếu b " << b<< endl;


    cout << "Địa chỉ của biến a: " << &a << endl;
    cout << "Địa chỉ của tham chiếu b " << &b << endl;
   return 0;
}
    /* Câu trả lời cho các câu hỏi:
     - Biến tham chiếu và biến mà nó chiếu tới là cùng một biến trong bộ nhớ. Khi ta thay đổi giá trị của biến tham chiếu,
    giá trị của biến gốc cũng thay đổi và ngược lại.
     - Không thể khai báo một tham chiếu mà chưa chiếu nó tới một biến thường.
     Một tham chiếu phải luôn được khởi tạo với việc chiếu tới một biến cụ thể ngay từ khi nó được khai báo.
     - Có thể thay đổi đích của một tham chiếu sau khi nó đã được khởi tạo. Việc này sẽ làm thay đổi biến mà tham chiếu trước đó đang chiếu tới.*/


