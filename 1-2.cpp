#include <iostream>

int is_identity(int array[10][10]) {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            
            if ((i == j && array[i][j] != 1) || (i != j && array[i][j] != 0)) {
                return 0; 
            }
        }
    }
    return 1; 
}

int main() {
    
    int matrix[10][10] = {
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 1}
    };

    int result = is_identity(matrix);

    if (result) {
        std::cout << "The matrix is an identity matrix." << std::endl;
    } else {
        std::cout << "The matrix is not an identity matrix." << std::endl;
    }

    return 0;
}
