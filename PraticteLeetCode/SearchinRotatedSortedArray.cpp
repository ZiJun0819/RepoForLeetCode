#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& nums, int target)
{
	int l = 0;
	int r = nums.size()-1;
	int mid = (l+r) >> 1;
	
	while(l <= r)
	{
		if(target == nums[mid]){
			return mid;
		}
		
		if(nums[l] <= nums[mid]){
			if(target >= nums[l] && target <= nums[mid])
			{
				r = mid - 1;
			}else{
				l = mid + 1;
			}
		}else{
			if(target <= nums[r] && target >= nums[mid])
			{
				l = mid + 1;
			}else{
				r = mid - 1;
			}
		}
		mid = (l+r) >> 1;
	}
	return -1;
}

int main()
{
	vector<int> nums;
	int in, target;
	char chr;
	while(cin >> in)
	{
		nums.push_back(in);
		cin.get(chr);
		if(chr != ' ')	break;
	}
	cin >> target;
	int res = binarySearch(nums, target);
	cout << res << endl;
	return 0;
}
