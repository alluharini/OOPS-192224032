#include <iostream>
void modifyValues(int *a, int *b);
int main() {
    int x = 5;
    int y = 10;
    std::cout << "Initial values: x = " << x << ", y = " << y << std::endl;
    modifyValues(&x, &y);
    std::cout << "Modified values: x = " << x << ", y = " << y << std::endl;

    return 0;
}

void modifyValues(int *a, int *b) {
    *a = 20;
    *b = 30;
}

