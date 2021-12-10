#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n, x;
	double y = 0;
	double total = 0;
	double sum = 0;
	double sum1, sum2 = 0;
	cout << "input n>=2,n=";
	cin >> n;
	cout << "input x=";
	cin >> x;
	{
		if (x < 0)
		{
			for (int i = 1; i++; i<=( n-1))
			{
				double sum2 = 0;
				for(int j=1; j++; j<=n)
				{
					sum = sum + (double)j / (pow(j, 2) + j);
				
				}
					sum1 = sum1 + sum2;
			}
		}
		else
		{
	     double sum = 0;
			for (int i = 1; i<=(n-1);i++)
			{
				sum = sum + i;
			}
			sum = x - sum;
			cout << sum << endl;
		}
	}
	system("pause");
	return 0; 
}