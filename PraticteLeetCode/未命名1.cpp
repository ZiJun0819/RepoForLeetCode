#include <bits/stdc++.h>

using namespace std;

int main() 
{
	float v1 = 6.0;
	float v2 = 0.5;
	int T;
	cin >> T;
	
	float C_T;
	
	C_T = 30.0*T/(v1-v2);
	cout << int(C_T+0.5) << ":" << T; 
	return 0;
}
