#include <iostream>
using namespace std;
void func1();
void func2();
#pragma starup func1
#pragma exit func2

void func1()
{
    cout<<"FIKOM"<<endl;
}

void func2()
{
    cout<<"UMI"<<endl;
}

int main ()
{
    func1();
    func2();
    return 0;
}
