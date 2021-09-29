#include<iostream>
#include<string>
using namespace std;
#define MAX 50

void details(void)
{
    string name,branch,college;
    int roll;
    cout<<"Enter the name of student : ";
    cin>>name;
    addspace(1,college);
    cout<<"College : ";
    cin>>college;
    cout<<"Branch : ";
    cin>>branch;
    cout<<"Roll number : ";
    cin>>roll;
    
    cout<<"Enter the name of student : "<<name<<endl;
    cout<<"College : "<<college<<endl;
    cout<<"Branch : "<<branch<<endl;
    cout<<"Roll number : "<<roll<<endl;
}
int main()
{
    cout<<"details of student"<<endl;
    details();
    return 0;
}
