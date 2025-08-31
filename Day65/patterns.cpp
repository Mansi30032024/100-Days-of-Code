#include <bits/stdc++.h>
using namespace std;

void pattern1(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int N = 5;

    pattern1(N);
  cout << endl;
    pattern2(N);
    cout << endl;
    pattern3(N);

    return 0;
}
