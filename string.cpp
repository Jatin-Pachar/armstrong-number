#include<iostream>
#include<string.h>
using namespace std;
class info
{
    public:
    string name;
    char sec;
    int roll;
};
int main()
{
    info data;
    cout<<"Enter Name : ";
    getline(cin,data.name);
    cout<<"Section : ";
    cin>>data.sec;
    cout<<"roll number : ";
    cin>>data.roll;
    cout<<"Name : "<<data.name<<endl<<"sec : "<<data.sec<<endl<<"roll no. "<<data.roll<<endl;
}
