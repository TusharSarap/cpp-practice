//Given an m x n matrix, return all elements of the matrix in spiral order.
//Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
//Output: [1,2,3,6,9,8,7,4,5]
#include <iostream>
using namespace std;

int main()
{
    int rows{ 0 };
    int cols{ 0 };
    cin >> rows;
    cin >> cols;

    int** arr = new int* [rows];
    for (int i = 0;i < rows;i++) {
        arr[i] = new int[cols];
    }

    cout << "Enter Elements:" <<rows<<" "<<cols << endl;

    for (int i = 0;i < rows;i++) {
        for (int j = 0;j < cols;j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0;i < rows;i++) {
        for (int j = 0;j < cols;j++) {
            cout<< arr[i][j]<<" ";
        }
        cout << endl;
    }

    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;

    cout << "result:" << endl;
    while (top <= bottom && left <= right) {
        for (int i = left;i <= right;i++) {
            cout << arr[top][i]<<" ";
        }
        top++;
        for (int i = top;i <= bottom;i++) {
            cout << arr[i][right] << " ";
        }
        right--;
        if (top <= bottom) {
            for (int i = right;i >= left;i--) {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom;i >= top;i--) {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
    delete[] arr;
    return 0;
}
