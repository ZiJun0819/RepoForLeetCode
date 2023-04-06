#include <bits/stdc++.h>
using namespace std;

//vector<vector<int>> threeSum(vector<int>& nums) {
//    int n = nums.size();
//
//    vector<vector<int>> res_vec;
//    if(n < 3)
//    {
//        return res_vec;
//    }
//
//    int target;
//    for(int i = 0;i < n-1; i++)
//    {
//        vector<int> hash_vec;
//        
//        for(int j = i+1; j < n; j++)
//        {
//            
//            target = 0 - nums[i] - nums[j];
//            auto it = find(hash_vec.begin(), hash_vec.end(), target);
//            if(it != hash_vec.end())
//            {
//                vector<int> res;
//                
//                int maxn = max(max(nums[i], nums[j]), *it);
//                int minn = min(min(nums[i], nums[j]), *it);
//                int mid = 0 - maxn - minn;
//                res.push_back(minn);
//                res.push_back(mid);
//                res.push_back(maxn);
//                
//                auto it1 = find(res_vec.begin(), res_vec.end(), res);
//                if(it1 == res_vec.end())	res_vec.push_back(res);
//            }
//
//            hash_vec.push_back(nums[j]);
//        }
//        hash_vec.clear();
//    }
//	
//    return res_vec;
//}
vector<vector<int>> threeSum(vector<int>& nums) {
	int target = 0;
	sort(nums.begin(), nums.end());
	int n = nums.size();
	
	set<vector<int>> s;
	vector<vector<int>> res;
	
	for(int i = 0;i < n; i++)
	{
		int j = i+1;
		int k = n-1;
		while(j < k)
		{
			int sum = nums[i] + nums[j] + nums[k];
			if(sum == target)
			{
				s.insert({nums[i], nums[j], nums[k]});
				j++;
				k--;
			}
			else if(sum < target)
			{
				j++;
			}else{
				k--;
			}
		}
	}
	
	for(auto r:s)
	{
		res.push_back(r);
	}
	return res;
}

int main()
{
	vector<int> nums;
	int in;
	char chr;
	
	while(cin >> in)
	{
		nums.push_back(in);
		cin.get(chr);
		if(chr != ' ')	break;
	}
	vector<vector<int>> res = threeSum(nums);
	for(int i = 0;i < res.size(); i++)
	{
		for(int j = 0; j< res[i].size(); j++)
		{
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
