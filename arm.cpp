#include<iostream>
#include<math.h>
using namespace std;

void armstrong(int N)
{
    int rem , n=0 , i=N , p=0;
    while(i>0)
    {
        i = i/10;
        p = p+1;
    }
    i=N;
    while(i>0)
    {
        rem = i%10;
        n = n + pow(rem,p);
        i = i/10;
    }
    if(N == n)
        cout<<N<<" is armstrong number";
    else
        cout<<N<<" is not armstrong number";

}
int main()
{
    int N ;
    cout<<"Enter the number";
    cin>>N;
    armstrong(N);

    return 0;
}
