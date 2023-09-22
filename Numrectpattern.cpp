#include<iostream>
using namespace std;

int main(){
    int rows,columns;
    cout<<"Enter the number of rows"<<endl;
    cin>>rows;
    cout<<"Enter the number of Columns"<<endl;
    cin>>columns;

    for(int i=1;i<=rows;i++){
        for(int j=i;j<=columns;j++){
            cout<<j;
        }
        for(int j=1;j<=(i-1);j++){
            cout<<j;
        }
        cout<<endl;
    }
}
