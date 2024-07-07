#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no. of rows:"<<endl;
    cin>>m;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    

}