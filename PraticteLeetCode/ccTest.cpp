#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> a;
	vector<int> o;
	map<int, int> m1;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		a.push_back(tmp);
		m1[tmp] = i;
	}
	for(int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		o.push_back(tmp);
	}
	
//	// 利用迭代器实现输出
//	for(auto it=m1.begin();it!=m1.end();it++){
//		cout<<it->first<<" "<<it->second<<endl;
//	}
	bool flag = true;
	int ele,next_ele;
	for(int i = 0;i < n-1;i++)
	{
		ele = o[i];
		next_ele = o[i+1];
		if(m1[next_ele] < m1[ele]){
			if(m1[ele] - m1[next_ele] > 1){
				flag = false;
				break;
			}
		}
	}
	if(flag == true){
		cout << "yes";
	}else{
		cout << "no";
	}

	return 0;
}
