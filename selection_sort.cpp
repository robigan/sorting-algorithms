#include <iostream>

using namespace std;

int main() {
    int input[] = {5, 3, 7, 0, 1};

    for (int i = 0; i < sizeof(input) / sizeof(int); i++) {
        int cachedValue = input[i];
        int lowestIndex = i;

        for (int j = i + 1; j < sizeof(input) / sizeof(int); j++) {
            if (input[j] < input[lowestIndex]) lowestIndex = j;
        }

        if (input[lowestIndex] < cachedValue) {
            input[i] = input[lowestIndex];
            input[lowestIndex] = cachedValue;
        }
    }

    for (int i = 0; i < sizeof(input) / sizeof(int); i++) {
        cout << input[i];
        if (!(i == sizeof(input) / sizeof(int) - 1)) cout << ", ";
    }

    cout << endl;
    return 0;
}