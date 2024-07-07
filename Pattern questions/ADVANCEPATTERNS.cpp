// HASH STARR PLUS
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mid = n / 2 + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == mid || i == mid)
            {
                cout << "* ";
            }
            else
            {
                cout << "# ";
            }
        }
        cout << endl;
    }
}

// STAR PLUS
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mid = n / 2 + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == mid || i == mid)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// HOLLOW RECTANGLE
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m;
    cin >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i == 1 || i == m) || (j == 1 || j == n))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// cross starr
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mid = n / 2 + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j==i || j==n+1-i)   //cross star
            {
                cout<<"*";

            }
            else if ((i == 1 || i == n) || (j == 1 || j == n)) //hollow box on it
            {
                cout<<"*";
            }
            else if (j == mid || i == mid) // star in hollow box
            {
                cout << "*";
            }

            else{cout<<" ";}
        }
        cout<<endl;
    }

}

// TRIANGLE VERTICALLY FLIPPED
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
