// REVERSE STAR
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows:";
    cin>>n;
    for (int i = 1; i <=n ; i++)
    {
        for ( int j = 1; j<=(n+1-i); j++)
        {
            cout<<"*";

        }
        cout<<endl;
    }

}
// REVERSE NUMBER

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows:";
    cin>>n;
    for (int i = 1; i <=n ; i++)
    {
        for ( int j = 1; j<=(n+1-i); j++)
        {
            cout<<j;

        }
        cout<<endl;
    }

}
// REVERSE ABCD

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows:";
    cin>>n;
    for (int i = 1; i <=n ; i++)
    {
        for ( int j = 1; j<=(n+1-i); j++)
        {
            cout<<(char)(j+64);

        }
        cout<<endl;
    }

}

// REVERSE 1111 222 33 4
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows:";
    cin>>n;
    for (int i = 1; i <=n ; i++)
    {
        for ( int j = 1; j<=(n+1-i); j++)
        {
            cout<<i;

        }
        cout<<endl;
    }

}

// REVERSE NHI H PR MUSHKIL H AS PRINT MEI CONDITIO BDLEGI
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no. of rows:";
    cin>>m;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<m+1-j;
        }
        cout<<endl;
    }

}

// // ODD NUMBER TRIANGLE
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<j*2-1;
        }
        cout<<endl;
    }

}

// FLOYDS TRIANGLE...
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a++ << " ";
        }
        cout << endl;
    }
}

// iss wale ka output dekh lio 1 01 101 0101 aese keke hi kch
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}
