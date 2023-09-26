// Sort an Array consisting of only 0s and 1s.;

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

    // //Approach 1
    // //To count number of zeros and remove them
    // int count=0;
    // for (int ele: v) {
    //     if(ele==0){
    //         count++;
    //     }
    // }

    // for(int i=0;i<n;i++){
    //     if(i<count){
    //         v[i]=0;
    //     }
    //     else{
    //         v[i]=1;
    //     }
    // }

    // Approach2

    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (a[i] == 1 && a[j] == 0)
        {
            a[i] = 0;
            a[j] = 1;
            i++;
            j--;
        }
        if (a[i] == 0)
            i++;
        if (a[j] == 1)
            j--;
    }

    // to print the result
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}
