#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {15, 3, 22, 8, 17, 9, 31, 6, 12};
    int min_value = 10; 
    std::cout << "Исходный массив: ";
    for (int n : numbers) std::cout << n << " ";
    std::cout << std::endl;
    
    std::sort(numbers.begin(), numbers.end(), [min_value](int a, int b) {
    // Сначала числа >= min_value, потом остальные
        if (a < min_value && b >= min_value) return false;
        if (a >= min_value && b < min_value) return true;
        return a < b; // Внутри групп сортируем обычно
    });
    
    std::cout << "После сортировки (числа >= " << min_value << " сначала): ";
    for (int n : numbers) std::cout << n << " ";
    std::cout << std::endl;
}
