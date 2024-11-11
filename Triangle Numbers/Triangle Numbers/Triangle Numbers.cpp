#include <iostream>

using namespace std;

class TriangleNumberCalculator {
public:
    TriangleNumberCalculator();
private:

};

TriangleNumberCalculator::TriangleNumberCalculator() {
}

int triangleThatNum(int n) {
    if (n <= 0) {
        return 0;
    }

    return n + triangleThatNum(n - 1);
}

int add(int n, int m) {
    return triangleThatNum(n) + triangleThatNum(m);
}

int main() {

    cout << triangleThatNum(7) << endl;
    cout << triangleThatNum(8) << endl;

    cout << add(7, 8) << endl;
}

