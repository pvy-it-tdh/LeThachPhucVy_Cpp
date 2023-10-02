#include <iostream>

using namespace std;

bool isLoShuMagicSquare(int square[3][3]) {
    // Kiểm tra mỗi hàng và mỗi cột có tổng bằng nhau
    int rowSum = 0, colSum = 0;
    for (int i = 0; i < 3; i++) {
        rowSum += square[i][0];
        colSum += square[0][i];
    }
    
    for (int i = 0; i < 3; i++) {
        int currentRowSum = 0, currentColSum = 0;
        for (int j = 0; j < 3; j++) {
            currentRowSum += square[i][j];
            currentColSum += square[j][i];
        }
        if (currentRowSum != rowSum || currentColSum != colSum) {
            return false;
        }
    }
    
    // Kiểm tra đường chéo chính
    int diagonalSum = 0;
    for (int i = 0; i < 3; i++) {
        diagonalSum += square[i][i];
    }
    if (diagonalSum != rowSum) {
        return false;
    }
    
    // Kiểm tra đường chéo phụ
    diagonalSum = 0;
    for (int i = 0; i < 3; i++) {
        diagonalSum += square[i][2 - i];
    }
    if (diagonalSum != rowSum) {
        return false;
    }
    
    return true;
}

int main() {
    int square[3][3] = {
        {5, 3, 4},
        {1, 5, 8},
        {6, 4, 2}
    };
    
    if (isLoShuMagicSquare(square)) {
        cout << "This is a Lo Shu Magic Square." << endl;
    } else {
        cout << "This is not a Lo Shu Magic Square." << endl;
    }

    return 0;
}
