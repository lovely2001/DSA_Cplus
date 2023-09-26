// Check if we can partition an input array into two subarrays with equal sum.
// More formally, check that the prefix sum of a part of the array is equal to the suffix sum of the rest of the array

#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int> &a)
{
    int n = a.size();
    int pref = 0, total_sum = 0;
    for (int i = 0; i < n; i++)
    {
        total_sum += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        pref += a[i];
        int suff = total_sum - pref;
        if (pref == suff)
            return true;
    }
    return false;
}

int main()
{
    cout << "Enter the number of elements you want to insert : " << endl;
    int n;
    cin >> n;
    vector<int> a(n);

    // To take input from the user
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element  " << i << endl;
        cin >> a[i];
    }

    cout << check(a);

    return 0;
}