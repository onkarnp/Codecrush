#include <stdio.h>
#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;

int main()
{
    long int t,x;
    srand((unsigned)time(0));
    ofstream out1("input30.txt");
    ofstream out2("output30.txt");
    /*cin>>*/t=rand()%5000+1;
    out1<<t<<"\n";
    cout<<t<<"\n";
    while(t--)
    {
        /*cin>>*/x=rand()%10000+1;
        out1<<x<<" ";
        cout<<x<<" ";
        long int ans=(x*x)-(2*x)+1;
        cout<<ans<<"\n";
        out2<<ans<<"\n";
    }
    return 0;
}
