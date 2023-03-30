#include <bits/stdc++.h>

using namespace std;

int fun_1(int a)
{
	a = 5;
	return a;
}
int fun_2(int &a)
{
	a = 5;
	return a;
}

int* fun_3(int *a)
{
	*a = 10;
	return a;
}
int main() 
{
	cout << INT_MAX;
	return 0;
}
