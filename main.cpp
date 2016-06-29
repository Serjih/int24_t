#include <iostream>
#include "int24_t.h"

using namespace std;

int main() {
    int i = int24_t(-12);
    cout << sizeof(int24_t) << " " << i << endl;
    return 0;
}
