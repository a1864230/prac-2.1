#include <iostream>

void count_digits(int array[4][4]) {
    
    int count[10] = {0};


    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            int digit = array[i][j];
            ++count[digit];
        }
    }

    
    for (int i = 0; i < 10; ++i) {
        std::cout << i << ":" << count[i];
        if (i < 9) {
            std::cout << ";";
        }
    }
    std::cout << std::endl;
}

int main() {
    
    int matrix[4][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 0, 1},
        {2, 3, 4, 5}
    };

    count_digits(matrix);

    return 0;
}
