#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        cout<<(x*x)-(2*x)+1<<"\n";
    }
    return 0;
}
