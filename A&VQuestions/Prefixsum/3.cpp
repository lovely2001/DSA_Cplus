//Given an array of integers ‘a’ of size n. For q number of inputs, print the sum of values in a given
//range of indices from l(starting index for the range) to r(ending index for the range),both l and r included in the sum.

#include <iostream>
#include <vector>
using namespace std;

vector<int> prefixsum(vector<int> &v) {
    int n = v.size();
    for (int i = 1; i < n; i++) {
        v[i] += v[i - 1];
    }
    return v;
}

int main()
{
    cout << "Enter the number of elements you want to insert : " << endl;
    int n;
    cin >> n;
    vector<int> a(n+1,0);

    // To take input from the user
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter the element  " << i << endl;
        cin >> a[i];
    }

    vector<int> prefixSumArray = prefixsum(a);

    cout<<"Enter the number of queries : "<<endl;
    int q;
    cin>>q;

    while(q--){
        int l,r;
        cout<<"Enter left range value"<<endl;
        cin>>l;
        cout<<"Enter right range value"<<endl;
        cin>>r;

        cout<<"Sum from index "<<l<<" to "<<r<<" is : "<<a[r]-a[l-1]<<endl; 
    }

    return 0;
}