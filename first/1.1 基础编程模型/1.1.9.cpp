#include "iostream"
#include <string>

using namespace std;

string ToBinary(int number);

int main() {
    int N = 4;
    string s = ToBinary(N);
    cout << s;
    return 1;
}

string ToBinary(int number) {
    string s = "";

    while (number > 0)
    {
        s = to_string( number %2) + s;
        number /= 2;
    }

    return s;
}