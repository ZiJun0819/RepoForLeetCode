#include <bits/stdc++.h>
using namespace std;

vector<int> mergeVector(vector<int>& l_nums, vector<int>& r_nums){
//	cout << "����鲢����׶Σ�" << endl;
//	for(int i = 0;i < l_nums.size(); i++)
//	{
//		cout << l_nums[i] << " ";
//	}
//	cout << endl;
//	for(int j = 0;j < r_nums.size(); j++)
//	{
//		cout << r_nums[j] << " ";
//	}
//	cout << endl;
	
	vector<int> sortedVec;
	int r_index = 0;
	
	
	for(int i = 0;i < l_nums.size(); ){
		if(r_index < r_nums.size() && r_nums[r_index] < l_nums[i]){
			sortedVec.push_back(r_nums[r_index]);
			r_index++;
			continue;	//**��©�Ĺؼ����֣�����continue��֤���п���������** 
		}
		sortedVec.push_back(l_nums[i]);
		i++;
	}
	
	if(r_index < r_nums.size())
	{
		for(int i = r_index;i < r_nums.size(); i++)
		{
			sortedVec.push_back(r_nums[i]);
		}
	}
	
	return sortedVec;
}

vector<int> mergeSort(vector<int>& nums){
	if(nums.size() <= 1)
	{
		return nums;
	}
	
	if(nums.size() == 2){
		if(nums[0] > nums[1])
		{
			int int_tmp = nums[0];
			nums[0] = nums[1];
			nums[1] = int_tmp;
		}
		return nums;
	}
	int mid = nums.size() / 2;
	
	//������н������� 
	vector<int> l_nums;
	for(int i = 0;i < mid; i++)
	{
		l_nums.push_back(nums[i]);
	}
	l_nums = mergeSort(l_nums);
	
	//�ұ����н������� 
	vector<int> r_nums;
	for(int j = mid; j < nums.size(); j++)
	{
		r_nums.push_back(nums[j]);
	}
	r_nums = mergeSort(r_nums);
	
	//�ϲ������������� 
	vector<int> mergedVectors = mergeVector(l_nums, r_nums);
	
//	ע����� 
//	cout << "�����Ľ��Ϊ:" << endl;
//	for(int i = 0;i < mergedVectors.size(); i++)
//	{
//		cout << mergedVectors[i] << " ";
//	}
//	cout << endl;

	return mergedVectors;
}

int main()
{
	vector<int> nums;

	int in_num;
	char chr;
	while(cin >> in_num){
		nums.push_back(in_num);
		cin.get(chr);
		if(chr != ' ')	break;
	}
	nums = mergeSort(nums);
	cout << "�����Ľ��Ϊ:" << endl;
	for(int i = 0;i < nums.size(); i++)
	{
		cout << nums[i] << " ";
	}
	return 0;
}
