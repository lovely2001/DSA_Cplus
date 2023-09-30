//Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the
//two arrays into a single sorted array of size m+n.


#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr1(3);
    vector<int> arr2(3);

    cout << "Enter the elements of arr1 in increasing order : " << endl;
    for (int i = 0; i < 3; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the elements of arr2 in increasing order : " << endl;
    for (int i = 0; i < 3; i++) {
        cin >> arr2[i];
    }

    int size = arr1.size() + arr2.size();

    vector<int> ans_array;

    int i = 0;
    int j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            ans_array.push_back(arr1[i]);
            i++;
        }
        else {
            ans_array.push_back(arr2[j]);
            j++;
        }
    }

    // If there are remaining elements in arr1, add them to ans_array
    while (i < arr1.size()) {
        ans_array.push_back(arr1[i]);
        i++;
    }

    // If there are remaining elements in arr2, add them to ans_array
    while (j < arr2.size()) {
        ans_array.push_back(arr2[j]);
        j++;
    }

    cout << "Merged and sorted array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << ans_array[i] << " ";
    }

    return 0;
}
