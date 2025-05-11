#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    for (int num = 1; num <= 500; ++num) {
        string str = to_string(num);
        int sum = 0;

        for (char digit : str) {
            int d = digit - '0'; // Convert char to int
            sum += pow(d, 3);
        }

        if (sum == num) {
            cout << num << endl;
        }
    }

    return 0;
}
