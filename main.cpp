#include <iostream>
#include "int24_t.h"

using namespace std;

int main() {
    int24_t a = 123;
    int24_t b = 234;

    a += 321;
    a++;

    cout << "a + b = " << +(a + b) << endl;

    return 0;
}
