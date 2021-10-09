#include<iostream>
using namespace std;

class base
{
    public:
    int x;
    
    static int y;
};

int base::y;

int main()
{
    base b1,b2;
    b1.x =10;
    b1.y = 30;
    b2.x = 40;
    b2.y = 50;
    
    cout<<b1.x<<" "<<b2.x<<endl;
    cout<<b1.y<<" "<<b2.y<<endl;
    return 0;
}
