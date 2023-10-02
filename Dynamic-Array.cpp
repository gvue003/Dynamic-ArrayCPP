//Make a dynamic array without new, push > 5 elements in random order and sort it from lowest to highest. Can use whatever sorting algorithm you wish (e.g Bubble Sort)

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

int main() {
    std::vector<int> dynamicArray;

    srand(static_cast<unsigned>(time(nullptr)));
    for (int i = 0; i < 10; ++i) {
        dynamicArray.push_back(rand() % 100);
    }
    std::sort(dynamicArray.begin(), dynamicArray.end());

    std::cout << "Sorted Array: ";
    for (const auto& element : dynamicArray) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
