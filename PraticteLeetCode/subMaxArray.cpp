#include <bits/stdc++.h>
using namespace std;
//动态规划及贪心思想 
int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    if(n == 1)
    {
        return nums[0];
    }
    int res = nums[0];
    int sum = nums[0];
    //当x的前序累加小于0时，表示前序对x作用为负，直接从x重新求目标值
	//动态规划思想：求最大f(i)，代表以第 i个数结尾的「连续子数组的最大和」
	//f(i)=max{f(i-1)+nums[i], nums[i]},动态规划转移方程意义为：f(i-1)为i-1结尾的最大连续子数组和，如果nums[i]>0,则可推得 
    for(int i = 1; i < n; i++)
    {
    	if(sum > 0)
    	{
    		sum += nums[i];
		}else{
			sum = nums[i];
		}
		res = max(res, sum);
	}
    return res;
}
//分治法进行求解 
//分别求解左右子串的最大连续子序列和
//在递归之时需使用四个变量：
//1.子串的所有元素之和iSum，
//2. 子串以l开头的子序列之和lSum，
//3. 子串以r开头的子序列之和rSum，
//4. 子串中间序列之和mSum 
struct Status{
	int lSum, rSum, mSum, iSum;
};

Status pushUp(Status l, Status r)
{
	int iSum = l.iSum + r.iSum;
	int lSum = max(l.lSum, l.iSum+r.lSum);
	int rSum = max(r.rSum, r.iSum+l.rSum);
	int mSum = max(max(l.mSum, r.mSum), l.rSum+r.lSum);
	return (Status) {lSum, rSum, mSum, iSum};
}
Status get(vector<int> &a, int l, int r)
{
	if(l == r)
	{
		return (Status) {a[l], a[l], a[l], a[l]};
	}
	int m = (l + r) >> 1;
	Status lSub = get(a, l, m);
	Status rSub = get(a, m+1, r);
	return pushUp(lSub, rSub);
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
		if(chr != ',')	break;
	}
	int res = maxSubArray(nums);
	int res1 = get(nums, 0, nums.size()-1).mSum;
	cout << res << endl << res1;
	return 0;
}
