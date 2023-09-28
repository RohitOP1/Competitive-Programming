#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[7];
	for(int i=0;i<7;i++)
		cin>>arr[i];

	int count =0 , i=0;

	while(n>0){
		count ++;
		n-=arr[i%7];//10%7==3
		i++;

		 if(n<=0) break;
	}
if(count %7 ==0)
	cout<< 7;


return 0;
}
