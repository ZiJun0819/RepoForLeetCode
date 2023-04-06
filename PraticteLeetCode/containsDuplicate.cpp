#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    bool flag = false;
    unordered_set<int> nums_set;
    for(int i = 0; i < nums.size(); i++){
        if(nums_set.find(nums[i]) != nums_set.end())
        {
            flag = true;
            return flag;
        }
        nums_set.insert(nums[i]);
    }
    return flag;
}

int main()
{
	vector<int> nums;
	char chr;
	int in;
	while(cin >> in)
	{
		nums.push_back(in);
		cin.get(chr);
		if(chr != ' ')	break;
	}
	bool res = containsDuplicate(nums);
	cout << res << endl; 
	return 0;
}
