/*Truy nhập mảng. Viết môt hàm count_even(int*, int) nhận tham số là một mảng và kích thước, và trả về số số chẵn trong mảng.
Viết hàm main demo việc sử dụng hàm cho một mảng (có thể hardcode - khởi tạo tại chỗ không cần nhập) cho các trường hợp gọi hàm count_even()
cho đoạn 5 phần tử đứng đầu mảng và đoạn 5 phần tử đứng cuối mảng. */

#include <iostream>

using namespace std;
#include <iostream>


int count_even(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            ++count;
        }
    }
    return count;
}

int main() {
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int count1 = count_even(A, 5);
    cout << "Number of even numbers in the first 5 elements: " << count1<< endl;


    int count2 = count_even(A + 5, 5); // A + 5 là con trỏ tới phần tử thứ 6
    cout << "Number of even numbers in the last 5 elements: " << count2 << endl;

    return 0;
}

