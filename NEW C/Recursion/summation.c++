#include<iostream>
using namespace std;
int sum(int n)
{
    if(n<2)
    {
        return 1;
    }
    else
    {
        return n+sum(n-1);
    }
}
int main()
{
    int n;
    cin>>n;

    int x=sum(n);
    cout<<x;

    return 0;
}