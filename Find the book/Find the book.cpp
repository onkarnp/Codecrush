#include <stdio.h>
#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;

int main(void) {
    srand((unsigned)time(0));
    long long int T;
    ofstream out1("input15.txt");
    ofstream out2("output15.txt");
    /*cin>>*/T=rand()%2+1;
    out1<<T<<"\n";
    cout<<T<<"\n";
    //scanf("%llu",&T);
    while(T--)
    {
        long long int t,d,total;
        long long int sum=0,i=0,y;
        //scanf("%llu%llu%llu",&d,&t,&total);
        //cin>>d>>t>>total;
        d=rand()%4+1;
        t=rand()%40+1;
        total=(rand()%150)+100;
        out1<<d<<" "<<t<<" "<<total<<"\n";
        cout<<d<<" "<<t<<" "<<total<<"\n";
        cout<<"\n";
        while(1)
        {
          y=1+i*d;
          if(y<=t)
          {
              sum+=y;
              i++;
          }
          else
          break;
        }
        if(sum>=total)
        {
            printf("Yes\n");
            out2<<"Yes"<<"\n";
        }
        else
        {
            printf("No\n");
            out2<<"No"<<"\n";
        }
    }
	// your code goes here
	return 0;
}
