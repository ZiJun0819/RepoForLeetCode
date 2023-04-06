#include <bits/stdc++.h>
using namespace std;
//��̬�滮��̰��˼�� 
int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    if(n == 1)
    {
        return nums[0];
    }
    int res = nums[0];
    int sum = nums[0];
    //��x��ǰ���ۼ�С��0ʱ����ʾǰ���x����Ϊ����ֱ�Ӵ�x������Ŀ��ֵ
	//��̬�滮˼�룺�����f(i)�������Ե� i������β�ġ���������������͡�
	//f(i)=max{f(i-1)+nums[i], nums[i]},��̬�滮ת�Ʒ�������Ϊ��f(i-1)Ϊi-1��β���������������ͣ����nums[i]>0,����Ƶ� 
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
//���η�������� 
//�ֱ���������Ӵ���������������к�
//�ڵݹ�֮ʱ��ʹ���ĸ�������
//1.�Ӵ�������Ԫ��֮��iSum��
//2. �Ӵ���l��ͷ��������֮��lSum��
//3. �Ӵ���r��ͷ��������֮��rSum��
//4. �Ӵ��м�����֮��mSum 
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
