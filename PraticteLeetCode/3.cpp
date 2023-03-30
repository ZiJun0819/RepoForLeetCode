#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    bool flag = true;
    if(n == 1)  return false;
    for(int i = 2;i <= int(sqrt(n));i++)
    {
        if(n % i == 0)  return false;
    }
    if(flag)    return true;
}
int main() 
{ 
    int n;
    cin >> n;
    long long int sum = 0;
	for(int i = 1; i <= n;i++)
	{
		if(isPrime(i))
		{
			sum += pow(i,3);
		}
	}
	cout << sum;
    return 0; 
}
