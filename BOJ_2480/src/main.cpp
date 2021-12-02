#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << 10000 + a * 1000;
        return 0;
    }

    if (a == b || a == c) {
        cout << 1000 + a * 100;
        return 0;
    }

    if (b == c) {
        cout << 1000 + b * 100;
        return 0;
    }

    vector<int> v{ a, b, c };
    auto m = *max_element(v.begin(), v.end());
    cout << m * 100;

    return 0;
}