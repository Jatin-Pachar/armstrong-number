#include<iostream>
using namespace std;
#define ROW 25
#define COL 25

void display_matrix(int  mat[ROW][COL] , int r , int c)
{
    cout<<"Numbers in matrix of order "<<r<<"*"<<c<<endl;
    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }
}
void read_matrix(int mat[ROW][COL] , int r , int c)
{
    cout<<"Enter the number in matrix of order "<<r<<"*"<<c<<endl;
    for(int i=0 ; i<r ; i++)
        for(int j=0 ; j<c ; j++)
            cin>>mat[i][j];
}
int main()
{
    int mat[ROW][COL];
    int r,c;
    cout<<"Enter the number of rows and column : ";
    cin>>r>>c;

    read_matrix(mat , r , c);
    display_matrix(mat , r , c);

    return 0;
}
