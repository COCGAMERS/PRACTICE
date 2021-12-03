#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n1,row,col;

    cout<<"ENTER NUMBER OF LINES : ";
    cin>>n1;
    for(row+1;row<=n1;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<" "<<col;
        }
        cout<<endl;
    }


    getch ();
    return 0;
}
