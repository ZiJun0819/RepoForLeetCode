#include <bits/stdc++.h>
using namespace std;

//struct Prods{
//	int lProd, rProd, mProd, iProd, lMin, rMin;
//};
//Prods mergeSub(Prods lSub, Prods rSub)
//{
//	Prods res;
//	res.iProd = lSub.iProd*rSub.iProd;
//	res.lMin = min(lSub.lMin, lSub.iProd*rSub.lMin);
//	res.rMin = min(rSub.rMin, rSub.iProd*lSub.rMin);
//	res.lProd = max(max(lSub.lProd, lSub.iProd*rSub.lProd), lSub.iProd*rSub.lMin);
//	res.rProd = max(max(rSub.rProd, rSub.iProd*lSub.rProd), rSub.iProd*lSub.rMin);
//	res.mProd = max(max(max(res.lProd, res.rProd), max(lSub.mProd,rSub.mProd)), max(lSub.rProd*rSub.lProd, res.lMin*res.rMin));
//	cout << res.iProd << " " << res.lProd << " " << res.mProd << " " << res.rProd << " " << res.lMin << " " << res.rMin << endl;
//	return res;
//}
//Prods maxSubProd(vector<int>& nums, int l, int r)
//{
//	if(l == r)
//	{
//		return Prods{nums[l],nums[l],nums[l],nums[l],nums[l],nums[l]};
//	}
//	
//	int mid = (l+r) >> 1;
//	
//	Prods lSub = maxSubProd(nums, l, mid);
//	Prods rSub = maxSubProd(nums, mid+1, r);
//
//	Prods mergeRes = mergeSub(lSub, rSub);
//	return mergeRes;
//}
//
//int maxProduct(vector<int>& nums)
//{
//	return maxSubProd(nums, 0, nums.size()-1).mProd;
//}

int maxProduct(vector<int>& nums) {
    int n = nums.size();
        int minProduct = 1;
        int maxProduct = 1;
        int ans = INT_MIN;
        for(int i=0; i<n; i++){
            if(nums[i] < 0){
                swap(maxProduct, minProduct);
            }
            maxProduct = max(maxProduct*nums[i], nums[i]);
            minProduct = min(minProduct*nums[i], nums[i]);
            ans = max(ans, maxProduct);
        }
        return ans;
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
	
	int res = maxProduct(nums);
	cout << res << endl;
	return 0;
}
