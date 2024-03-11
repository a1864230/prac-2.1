#include <iostream>

void print_scaled(int array[3][3], int scale) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            
            std::cout << array[i][j] * scale;
            
            
            if (j < 2) {
                std::cout << " ";
            }
        }
        
        std::cout << std::endl;
    }
}

int main() {
    
    int scale = 3;
    int threebythree[3][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };

    print_scaled(threebythree, scale);

    return 0;
}
