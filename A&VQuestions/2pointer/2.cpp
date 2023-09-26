//Given an array of integers ‘a’,move all the even integers at the beginning of the array followed by all the odd 
//integers. The relative order of odd or even integers does not matter. Return any array that satisfies the condition.

#include <iostream>
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

    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if ((a[i] %2 !=0)  && (a[j] % 2 == 0))
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
        if (a[i] %2 == 0)
            i++;
        if (a[j] % 2 != 0)
            j--;
    }

    // to print the result
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}
