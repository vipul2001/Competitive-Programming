#include<iostream >
using namespace std;
void fact(int n)
{
	int arr[200]={1,0};
	int product=0,carry=0,maxj=0;
	if(n==1)
	{
	cout<<1<<endl;
    return;
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=0;j<200;j++)
		{
			product=arr[j]*i+carry;
			arr[j]=product%10;
			carry=product/10;
			if(product>0&&j>maxj)
			maxj=j;
		}
	}
	for(int i=maxj;i>=0;i--)
	{
		cout<<arr[i];
	}
	cout<<endl;
	
}
int main()
{
	int n,k;
	cin>>n;
	while(n--)
	{
		cin>>k;
		fact(k);
	}
	return 0;
}
