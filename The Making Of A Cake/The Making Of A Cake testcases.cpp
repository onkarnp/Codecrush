#include<bits/stdc++.h>
using namespace std;

int main()
{
    char e[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int t;
    ofstream out1("input19.txt");
    ofstream out2("output19.txt");
    srand((unsigned)time(0));
    t=rand()%2000+1;
    out1<<t;
    while(t--)
    {
        int n,k,ind1,ind2,i,j,ref=0;
        n=rand()%50+1;
        k=rand()%14+1;
        cout<<"\n"<<n<<" "<<k<<"\n";
        out1<<"\n"<<n<<" "<<k<<"\n";
        string a= "";
        for(int i=0;i<n;i++)
            a=a+e[rand()%26];
        string b=a;
        reverse(b.begin(),b.end());
        out1<<a<<"\n"<<b;
        cout<<a<<"\n"<<b;
		for(i=0;i<n;i++){
			for(j=i%k;j<n;j+=k)
			if(a[i]==b[j]) break;
			if(a[i]==b[j]) b[j]='0';
			else{ref=-1;break;}
		}
		if(ref==-1){
                printf("No\n");
                out2<<"No\n";
		}
		else{
                printf("Yes\n");
                out2<<"Yes\n";
		}
	}
}
