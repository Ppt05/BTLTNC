#include <iostream>
#include <string>
using namespace std;

void testArray(int arr[]) {
    cout << "Địa chỉ của mảng trong hàm testArray: " << arr << endl;
}

void testString(string str) {
    cout << "Địa chỉ của string trong hàm testString: " << &str << endl;
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    string str = "Hello";

    testArray(arr);
    testString(str);
    return 0;
}


    /*Nhận xét:
    // - Mảng được truyền theo cơ chế pass-by-pointer. Khi một mảng được truyền vào một hàm, thực ra chỉ có con trỏ tới phần tử đầu tiên
    của mảng được truyền, không phải là mảng thực sự. Do đó, mảng được truyền bằng cách tham chiếu, không phải tham trị.
    // - std::string được truyền theo cơ chế pass-by-value. Mặc dù std::string trong C++ không phải là kiểu dữ liệu cơ bản nhưng được
    thiết kế để hoạt động như một kiểu dữ liệu cơ bản, và mặc định được truyền bằng cách sao chép, nên thực sự được truyền theo cơ chế
    pass-by-value
