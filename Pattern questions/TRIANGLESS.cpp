// // STARRRRR
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no. of rows:"<<endl;
    cin>>m;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    

}
// TRIANGLE MEI BS YE DHYAN RKHNA HAI KI JO J HOGA VO LESSTHAN I CHALEGA ISS WALE MEI BECAUSE JO ROW KA NUMBER H UTNE HI STAR PRINT HORE H EK ROW MEI SO IT WILL ALWAYS LESS THAN EQUAL TO I

// NUMBERR
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no. of rows:"<<endl;
    cin>>m;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    

}

//ABCD
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows:";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<(char)(j+64);
        }
        cout<<endl;
    }
    
}

// small abcd
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows:";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<(char)(j+96);
        }
        cout<<endl;
    }
    
}

// ROWS COLUMN INVERSE WALA
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows:";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    
}

// 1 AB 123 WALA
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows:";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {if (i%2!=0)
        {
            cout<<j;
        }
        else{
            cout<<(char)(j+64);
        }
        
            
        }
        cout<<endl;
    }
    
}