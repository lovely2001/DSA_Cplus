//Given an integer array ‘a’ sorted in non-decreasing order, return an array of the squares of each number sorted 
//in non-decreasing/increasing order.

#include <iostream>
#include<math.h>
#include<algorithm>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter the number of elements you want to insert : " << endl;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element  " << i << endl;
        cin >> a[i];
    }


    vector<int> ans;
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (abs(a[i])<abs(a[j]))
        {
            ans.push_back(a[j]*a[j]);
            j--;
        }

        else{
            ans.push_back(a[i]*a[i]);
            i++;
        }
    }

    reverse(ans.begin(),ans.end());

    // to print the result
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}