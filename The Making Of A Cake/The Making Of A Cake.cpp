#include<bits/stdc++.h>
int main(){
	int test;scanf("%d",&test);char a[100001],b[100001];
	while(test--){
		int n,k,i,j,ref=0;scanf("%d%d",&n,&k);scanf("%s%s",a,b);
		for(i=0;i<n;i++){
			for(j=i%k;j<n;j+=k)
			if(a[i]==b[j]) break;
			if(a[i]==b[j]) b[j]='0';
			else{ref=-1;break;}
		}
		if(ref==-1) printf("No\n");
		else printf("Yes\n");
	}
}
