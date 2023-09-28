#include<bits/stdc++.h>
using namespace std;
int arr[24] [60];

int main()
{
	int n,a,b;//guests-n
	cin>>n;

	int cash=0;// no. of cashes needed 
	for(int i=0;i<n;i++)
	{
      cin>>a>>b;  
      arr[a] [b] ++;//count the both no.

      if(arr[a] [b]>cash)
      	cash= arr[a] [b];


	}
	cout<<cash<<endl;

}
