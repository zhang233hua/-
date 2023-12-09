#include <iostream>

int main() {
    const int responseSize = 40;
    const int frequencySize = 11;
    const int responses[40] = { 1,2,6,4,8,5,9,7,8,10,1,6,3,8,6,10,
                                3,8,2,7,6,5,7,6,8,6,7,5,6,6,5,6,7,5,6,4,8,6,8,10 };
    int frequency[frequencySize] = { 0 };

    for (int i = 0; i < responseSize; ++i) {
        ++frequency[responses[i]];
    }

    int num = frequencySize;
    int swapped = 1;
    while (swapped) {
        swapped = 0;
        for (int i = 1; i < num - 1; ++i) {
            if (frequency[i] > frequency[i + 1]) {
                std::swap(frequency[i], frequency[i + 1]);
                swapped = 1;
            }
        }
        --num;
    }

    for (int i = 1; i < frequencySize; ++i) {
        std::cout << frequency[i] << ' ';
    }

    return 0;
}
