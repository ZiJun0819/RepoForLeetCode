#include<bits/stdc++.h> 

using namespace std;

int main( )
{

    bool f1,f2,f3,f4,f5;//Ö±½Ç¡¢Èñ½Ç¡¢¶Û½Ç¡¢µÈÑü¡¢µÈ±ß 
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> temp;
    temp.push_back(a);
    temp.push_back(b);
    temp.push_back(c);
    sort(temp.begin(),temp.end());
    int min,mid,max;
    min = temp[0];
    mid = temp[1];
    max = temp[2];
    if((min+mid > max) && (min+max > mid) && (mid+max > min) && (max-min < mid) && (max-mid < min) && (mid-min < max)) 
	{
		//¶Û½Ç 
	    if(pow(min,2)+pow(mid,2) < pow(max,2)){
	    	cout << "Obtuse triangle" << endl;
		}else if(pow(min,2)+pow(mid,2) == pow(max,2)){//Ö±½Ç 
			cout << "Right triangle" << endl;
		}else if(pow(min,2)+pow(mid,2) > pow(max,2)){//Èñ½Ç 
			cout << "Acute triangle" << endl;
		}
		if(min == mid || mid == max){
	    	cout << "Isosceles triangle" << endl;
		}
		if(min == mid && mid == max){
			cout << "Equilateral triangle" << endl;
		}
	}else{
		cout << "Not triangle" << endl;
	}
    return 0;
}
