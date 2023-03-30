#include <bits/stdc++.h>
using namespace std;

//vector<int> binaryCompare(vector<int>& prices, int mid, vector<int>& profit)
//{
//    
//    if(prices.size() == 2)
//    {
//        if(prices[1] > prices[0])
//        {
//            if(profit[0] > prices[0] && prices[0] <= profit)    profit[0] = prices[0];
//            if(profit[1] < prices[1])    profit[1] = prices[1];
//        }
//        return profit;
//    }
//    
//    vector<int> l_pirces;
//    
//    for(int i = 0; i <= mid; i++)
//    {
//        l_pirces.push_back(prices[i]);
//    }
//	
//    int l_mid = (int) l_pirces.size() / 2;
//    profit = binaryCompare(l_pirces, l_mid, profit);
//	cout << "left:" << profit[0] << " " << profit[1] << endl;
//	
//    vector<int> r_pirces;
//    
//    for(int j = mid; j < prices.size(); j++)
//    {
//        r_pirces.push_back(prices[j]);
//    }  
//    int r_mid = (int) r_pirces.size() / 2;
//    
//    profit = binaryCompare(r_pirces, r_mid, profit);
//    cout << "right:" << profit[0] << " " << profit[1] << endl;
//    return profit;
//}
//
//int maxProfit(vector<int>& prices) {
//	if(prices.size() <= 1)
//	{
//		return 0;
//	}
//	vector<int> init_profit = {100000, -100000};
//    int mid = prices.size() / 2;
//
//    vector<int> vec_profit = binaryCompare(prices, mid, init_profit);
//    int profit = vec_profit[1] - vec_profit[0];
//    profit < 0 ? profit = 0 : profit = profit;
//    return profit;
//}

int maxProfit(vector<int>& prices) {
    int profit = 0, init_min = prices[0];
    for(int i = 0;i < prices.size(); i++)
    {
        if(prices[i] - init_min > profit)   profit = prices[i] - init_min;
        if(init_min > prices[i])    init_min = prices[i];
    }
    return profit;
}

    
int main(){
	vector<int> prices;
	int in_num;
	char chr;
	while(cin >> in_num){
		prices.push_back(in_num);
		cin.get(chr);
		if(chr != ' ')	break;
	}
	int maxP = maxProfit(prices);
	cout << maxP;
	return 0;
}
