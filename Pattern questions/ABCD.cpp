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
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
    

}
// A A A A
// B B B B
// C C C C
// D D D D WALE CODE KE LIYE COUT MEI BS J KI JAGHA I KRNA HAI
// SMALL abcd ke liye ascii value bdani h bs