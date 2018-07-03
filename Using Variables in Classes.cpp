#include<iostream>
#include<string>
using namespace std;

class RyansClass
{
public:
    void setName(string x)
    {
    name = x;
    }
    string getName()
    {
    return name;
    }

private:
    string name;

};

int main()
{
    RyansClass ro;
    ro.setName("Sir Ryan Wallace");
    cout<<ro.getName();
    return 0;
}
