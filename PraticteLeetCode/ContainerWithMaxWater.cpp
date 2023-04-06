#include <bits/stdc++.h>
using namespace std;

//int maxArea(vector<int>& height) {
//    int n = height.size();
//    vector<int> area_i(n);
//    for(int i = 1;i < n;i++)
//    {
//        int max_area = 0;
//        for(int j = 0;j < i;j++)
//        {
//            max_area = max(max_area, (i-j)*(min(height[i], height[j])));
//        }
//        area_i[i] = max(max_area, area_i[i-1]);
//    }
//    return area_i[n-1];
//}
    
int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    int maxi = 0;
    while(left < right){
        int w = right - left;
        int h = min(height[left], height[right]);
        int area = h * w;
        maxi = max(maxi, area);
        if(height[left] < height[right]) left++;
        else if(height[left] > height[right]) right--;
        else {
            left++;
            right--;
        }
    }
    return maxi;
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
	
	int res = maxArea(nums);
	
	cout << res;
	return 0;
}
