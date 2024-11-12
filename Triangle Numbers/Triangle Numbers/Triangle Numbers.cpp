#include <iostream>

using namespace std;

class TriangleNumberCalculator {
public:
    TriangleNumberCalculator();
    int triangleThatNum(int);
    int add(int, int);
    int subtract(int, int);
private:

};
TriangleNumberCalculator::TriangleNumberCalculator() {
}
int TriangleNumberCalculator::triangleThatNum(int n) {
    if (n <= 0) {
        return 0;
    }

    return n + triangleThatNum(n - 1);
}
int TriangleNumberCalculator::add(int n, int m) {
    return triangleThatNum(n) + triangleThatNum(m);
}
int TriangleNumberCalculator::subtract(int n, int m) {
    return triangleThatNum(n) - triangleThatNum(m);
}

int main() {
    TriangleNumberCalculator *triNum = new TriangleNumberCalculator();
    
    cout << triNum->triangleThatNum(4535) << endl;

    cout << triNum->add(4535, 4535) << endl;

    cout << triNum->subtract(4535, 4535) << endl;

    /* tests
    cout << triNum->triangleThatNum(1) << endl; // This should print out 1
    cout << triNum->triangleThatNum(2) << endl; // This should print out 3
    cout << triNum->triangleThatNum(4) << endl; // This should print out 10

    cout << triNum->add(1, 1) << endl; // This should print out 2
    cout << triNum->add(2, 3) << endl; // This should print out 9
    cout << triNum->add(4, 2) << endl; // This should print out 13

    cout << triNum->subtract(1, 1) << endl; // This should print out 0
    cout << triNum->subtract(2, 3) << endl; // This should print out -3
    cout << triNum->subtract(4, 2) << endl; // This should print out 7
    */
}

