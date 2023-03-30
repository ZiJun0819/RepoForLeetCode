#include <bits/stdc++.h>
using namespace std;

//vector<int> twoSum(vector<int>& nums, int target) {
//    vector<int> res;
//    int num_1, num_2;
//    for(int i = 0;i < nums.size(); i++)
//    {
//        num_1 = nums[i];
//        num_2 = target - num_1;
//        
//        auto it1 = find(nums.begin()+i, nums.end(), num_1);
//		auto it2 = find(nums.begin()+i+1, nums.end(), num_2);
//		
//        if(it2 != nums.end()){
//        	cout << *it1 << " " << *it2 << endl;
//            res.push_back(distance(begin(nums), it1));
//            res.push_back(distance(begin(nums), it2));
//            break;
//        }
//    }
//    return res;
//}
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map <int, int> hashtable;
    for(int i = 0;i < nums.size(); i++)
    {
        auto it = hashtable.find(target-nums[i]);
        if(it != hashtable.end()){
        	return {it->second, i};
		}
		hashtable[nums[i]] = i;
    }
    return {};
}

int main(){
	vector<int> nums;
	vector<int> res_twoSum;
	int target;
	int in_num;
	char chr;
	while(cin >> in_num){
		nums.push_back(in_num);
		cin.get(chr);
		if(chr != ' ')	break;
	}
	cin >> target;
	
	res_twoSum = twoSum(nums, target);
	for(int i = 0;i < res_twoSum.size(); i++)
	{
		cout << res_twoSum[i] << " ";
	}
	return 0;
} 
