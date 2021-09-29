#include<iostream>
using namespace std;

void armstrong(int N)
{
    int rem , n=0 , i=N;
    while(i>0)
    {
        rem = i%10;
        n = n + rem*rem*rem;
        i = i/10;
    }
    if(N == n)
        cout<<N<<" is armstrong number";
    else
        cout<<N<<" is not armstrong number";

}
int main()
{
    int N;
    cout<<"Enter the number";
    cin>>N;

    armstrong(N);

    return 0;
}
