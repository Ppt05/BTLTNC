/*Mảng truyền vào hàm dạng con trỏ. Hãy viết một chương trình demo rằng khi truyền tham số, mảng được truyền vào hàm ở dạng con trỏ chứ không phải dạng mảng.
Gợi ý: khai báo một mảng một chiều A, in kích thước của mảng bằng toán tử sizeof. Sau đó, viết thêm một hàm f nhận tham số kiểu mảng (thử cả mảng không xác định cũng như có xác định kích thước) và in ra kích thước của mảng.
 So sánh kết quả của sizeof đối với mảng A từ bên trong hàm f và bên ngoài - nơi khai báo mảng A.*/


#include <iostream>

using namespace std;

#include <iostream>

void f(int* arr) {
    // In kích thước của con trỏ bên trong hàm
    cout << "Size of array inside function: " << sizeof(arr) << " bytes" << endl;
}

int main() {
    int A[10];

    // In kích thước của mảng ở bên ngoài hàm
    cout << "Size of array outside function: " << sizeof(A) << " bytes" << endl;
    f(A);

    return 0;
}
 /* Nhận xét:kết quả sizeof  cho thấy rằng khi mảng A được truyền vào hàm f <nơi khai báo mảng A ,
  nó được truyền dưới dạng con trỏ , không phải là toàn bộ mảng.
  Điều này chứng tỏ rằng mảng khi được truyền vào hàm thực chất là truyền con trỏ.*/








