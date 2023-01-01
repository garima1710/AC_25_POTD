#include<iostream>
using namespace std;
int main()
{
    int i, space, j;
    int n;
    cout<<"Enter the number of rows : "; 
    cin>>n;
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(space=n; space>i; space--)
            cout<<" ";

        for(j=0; j<i; j++)
            cout<<"* ";

        cout<<endl;
    }
    cout<<endl;

    return 0;
}