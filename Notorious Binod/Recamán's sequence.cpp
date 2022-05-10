#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<time.h>
#include<fstream>

using namespace std;
ofstream out1("input25.txt");
ofstream out2("Output25.txt");
void recaman(int n)
{
	int arr[n];
	arr[0] = 0;
	//printf("%d ", arr[0]);
	for (int i=1; i< n; i++)
	{
		int curr = arr[i-1] - i;
		int j;
		for (j = 0; j < i; j++)
		{
			if ((arr[j] == curr) || curr < 0)
			{
				curr = arr[i-1] + i;
				break;
			}
		}

		arr[i] = curr;
		//printf("%d ", arr[i]);
	}
	cout<<arr[n-1]<<"\n";
	out2<<arr[n-1]<<"\n";
}

// Driver code
int main()
{
    srand((unsigned)time(0));
	int n=rand()% 1000+1;
	cout<<n<<"\n\n";
	out1<<n<<"\n";
	int a[n];
	for(int i=0;i<n;i++)
    {
        a[i]=rand()%1000+1;
        out1<<a[i]<<"\n";
        cout<<a[i]<<"\n";
    }
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        recaman(a[i]);
    }
	return 0;
}
