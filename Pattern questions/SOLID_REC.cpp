#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no. of rows:"<<endl;
    cin>>m;
    cout<<"Enter no. of columns:"<<endl;
    cin>>n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    

}