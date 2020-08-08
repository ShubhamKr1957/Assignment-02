#include <iostream>
using namespace std;
void Rectangle(int row, int col)
{
    cout<<endl<<"--- Rectangle ---";
    cout<<endl<<endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(i == 0 || j == 0 || i == row -1 || j == col - 1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void Arrow(int row, int col)
{
    cout<<endl<<"--- Arrow ---";
    cout<<endl<<endl; 
    for(int i = 0; i < 3; i++)
    {    
        for(int j = 0; j < 3; j++)
        {
            if(j >= 3 - i - 1)
            {
                cout<<"*"; 
            }
            else 
            {
                cout<<" ";
            }
        }
        int j = i;
        while(j != 0)
        {
            cout<<"*";
            j--;
        }
        cout<<endl;
    }
    for(int i = 0; i < row - 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
}
void oval(int row, int col)
{
    cout<<endl<<"--- Oval ---";
    cout<<endl<<endl;
    int i,j,k;
    if(row<3)
    {
        cout<<"Invalid number";
    }
    else if(row==3)
    {
        for(i=1;i<=5;i++)
        {
            if(i==1||i==5)
            {
                cout<<" *";
                cout<<endl;
            }
            else
            {
                cout<<"* ";
                cout<<"*";
                cout<<endl;
            }
        }
    }
    else
    {
        for(i=1;i<=row+2;i++)
        {
            if(i==1||i==row+2)
            {
                for(j=1;j<=2;j++)
                {
                    cout<<" ";
                }
                for(k=j;k<=row-2;k++)
                {
                    cout<<"*";
                }
                cout<<endl;
            }
            else if(i==2||i==row+1)
            {
                cout<<" ";
                cout<<"*";
                for(j=1;j<=row-4;j++)
                {
                    cout<<" ";
                }
                cout<<"*";
                cout<<endl;
            }
            else
            {
                cout<<"*";
                for(j=2;j<row;j++)
                {
                    cout<<" ";
                }
                cout<<"*";
                cout<<endl;
            }
        }
    }
}
void diamond(int row, int col)
{
    cout<<endl<< "--- Diamond ---";
    cout<<endl<<endl;
    int a,b;
    for(a=1;a<=row;a++)
    {
        for(b=row;b>a;b--)
        {
            cout<<" ";
        }
        cout<<"*";
        for(b=1;b<(a-1)*2;b++)
        {
            cout<<" ";
        }
        if(a==1)
        {
            cout<<endl;
        }
        else
        {
            cout<<"*"<<endl;
        }
    }
    for(a=row-1;a>=1;a--)
    {
        for(b=row;b>a;b--)
        {
            cout<<" ";
        }
        cout<<"*";
        for(b=1;b<(a-1)*2;b++)
        {
            cout<<" ";
        }
        if(a==1)
        {
            cout<<endl;
        }
        else
        {
            cout<<"*"<<endl;
        }
    }
}
int main()
{
    int row, col;
    cout<<"Enter Rows : ";
    cin>>row;
    cout<<"Enter Column : ";
    cin>>col;

    if(row < 3 || col < 3)
    {
        cout<<endl<<"NOT POSSIBLE ";
    }
    else
    {
        // Rectangle
        Rectangle(row, col);   
        // Arrow
        Arrow(row, col);
        // Diamonds
        diamond(row, col);
        // Oval
        oval(row, col);
    }
    return 0;
}
