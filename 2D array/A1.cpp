//Given a 2D matrix with m rows and n columns containing integers, find and print the
//maximum value present in the array.

#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

    int arr[m][n];

    cout<<"Enter the value of matrix : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Entered Matrix is : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int ans = INT8_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>ans){
                ans=arr[i][j];
            }
        }
    }

    cout<<"Maximum value is : "<<ans<<endl;
}