#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    const int N = 1e5 + 10;
    vector<int> frequency(N, 0);  // declaration+initialization

    for (int i = 0; i < n; i++) { // Use n instead of N here
        frequency[v[i]]++;
    }

    cout << "Enter no of queries : " << endl;
    int q;
    cin >> q;

    while (q--) {
        int qele;
        cin >> qele;

        if (qele < N) {
            cout << frequency[qele] << endl;
        } else {
            cout << "Number out of range." << endl;
        }
    }

    return 0;
}
