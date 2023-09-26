//Given an integer array ‘a’, return the prefix sum/ running sum in the same array without creating a new array

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter the number of elements you want to insert : " << endl;
    int n;
    cin >> n;
    vector<int> a(n);
    
    //To take input from the user
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element  " << i << endl;
        cin >> a[i];
    }

    //Main logic
    for(int i=1;i<n;i++){
        a[i] += a[i-1];
    }
 
    // to print the result
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}