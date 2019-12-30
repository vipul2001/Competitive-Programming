/*Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). For each successful withdrawal the bank charges 0.50 $US. Calculate Pooja's account balance after an attempted transaction.*/
#include<iostream>
using namespace std;
int main()
{
	int a;
	double b;
	cin>>a;
	cin>>b;
	if((a%5==0)&&((b-a-0.5)>0))
	cout<<b-a-0.5;
	else
	cout<<b;
	return 0;
}
