#include <bits/stdc++.h>
using namespace std;

struct student{
	int id;
	string name;
};
student stu[5];
const int a = 99999;
#define E 2.88888888
typedef pair<int,string> ip;
bool cmp(int a,int b)
{
	return a > b;
}
int main(int argc, char** args)
{
	//自定义cmp 
	vector<int> a(5);//此处不可以使用[] 
	for(int i = 0;i < 5;i++)
	{
		cin >> a[i];
	}
	//修改为从大到小排序，默认从小到大 
	sort(a.begin(),a.end(),cmp);//vector使用排序 
	for(int i = 0;i < 5;i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	
	
	int b[5];
	for(int i = 0;i < 5;i++)
	{
		cin >> b[i];
	}
	//数组使用排序 
	sort(b,b+5,cmp);
	for(int i = 0;i < 5;i++)
	{
		cout << b[i] << " ";
	}
	
	//1. 结构体数组字符串语法 
	/*for(int i = 0;i < 3;i++)
	{
		cin >> stu[i].id;
		getchar();
		getline(cin,stu[i].name);
	}
	//由于string、vector、map、queue、stack等都是容器对象，所以对象一般都是直接调用方法
	//即直接string.length()之类的，使用.（点）方法来控制对象 
	for(int i = 0;i < 3;i++)
	{
		cout << stu[i].id << "-----" << stu[i].name << " len(name): " << stu[i].name.length() << endl;
		cout << "从第一个字符往后截取所有字符：" << stu[i].name.substr(0) << endl;
		//其中第一个参数为下标，从0开始，区间是闭区间即[ 
		cout << "从第一个字符往后截取两个字符：" << stu[i].name.substr(1,2) << endl;
	}
	
	string s;
	getline(cin,s);
	cout << s << endl;
	printf("%s\n",s.c_str());//使用printf输出string需要加c_str() 
	//从下标2开始查找 
	//string::npos类似于其他容器中的end()标志，例如：s.end() 
	if(s.find("abc",2) != string::npos)
	{
		int index = s.find("abc");
		cout << index << endl;
		cout << "找到了";
	}
*/

	//2. #define E 2.88888888 定义常量语法 
	/*2.88889默认情况cout只保留五位有效数字 
	cout << E << endl;
	printf("%.11f",E);*/
	
	//3. pair语法 
	
	/* 
	typedef pair<string,int> sp;
	ip ii[1];
	sp ss[1];
	ip temp = make_pair(123,"abc");
	sp tmp = make_pair("abc",123);
	ii[0] = temp;
	ss[0] = tmp;
	cout << ii[0].first << ii[0].second << endl;
	cout << ss[0].first << ss[0].second << endl;
	*/
	
	
	//4. vector语法 
	
/*	vector<int> a;
	cout << a.size() << endl;
	//vector数组初始化5个99 
	vector<int> b(5,99);
	cout << b.size() << endl;
	for(int i = 0;i < b.size();i++)
	{
		cout << b[i];
		i < b.size()-1 ? cout << "\t" : cout << endl;
	}
	int tmp;
	for(int i = 0;i < 3;i++)
	{
		cin >> tmp;
		b.push_back(tmp);
	}
	cout << "-------------------"<<endl;
	cout << b.size() << endl;
	for(int i = 0;i < b.size();i++)
	{
		cout << b[i];
		i < b.size()-1 ? cout << "\t" : cout << endl;
	}
	b.resize(5);//重新改变大小，其中内容为原有的b数组中的前五个内容 
	cout << "-------------------"<<endl;
	cout << b.size() << endl;
	for(int i = 0;i < b.size();i++)
	{
		cout << b[i];
		i < b.size()-1 ? cout << "\t" : cout << endl;
	}
	//将b中的最后两个元素弹出 
	for(int i = 0;i < 2;i++)	b.pop_back();
	cout << "-------------------"<<endl;
	cout << b.size() << endl;
	for(int i = 0;i < b.size();i++)
	{
		cout << b[i];
		i < b.size()-1 ? cout << "\t" : cout << endl;
	}
	//迭代器输出vector数组内容 
	for(auto it=b.begin();it!=b.end();it++)
	{
		it == b.begin() ?   : cout << " ";
		cout << *it;
	}*/
	
	//5. set语法，set默认去重并且会从小到大排序 
	
/*	set<int> s;
	s.insert(1);
	cout << *(s.begin()) << endl;
	int tmp;
	for(int i = 0;i < 3;i++)
	{
		cin >> tmp;
		s.insert(tmp);
	}
	for(auto it = s.begin();it != s.end();it++)
	{
		it == s.begin() ?   : cout << " ";
		cout << *it;
	}
	cout << endl << (s.find(2) != s.end()) << endl; //查找到了返回1即true 
	cout << (s.find(10) != s.end()) << endl;//未查找到返回0，即false 
	s.erase(1);//删除1元素 
	cout << (s.find(1) != s.end()) << endl;*/ 
	
	//6. map语法 
	
/*	map<string,int> m;
	//map中的内容将会依据key值的大小从小到大进行排序 
	m["hello"] = 2;
	cout << m["hello"] << endl;
	cout << m["world"] << endl; // 访问map中key为"hello"的value, 如果key不存在，则返回0
	m["world"] = 5;
	m[","] = 66;
	//map输出 
	for(auto it = m.begin();it != m.end();it++)
	{
		cout << it->first << "--->" << it->second << endl;
	}
	//输出map中第一个 
	cout << m.begin()->first << "--->" << m.begin()->second << endl;
	//输出map中最后一个 
	cout << m.rbegin()->first << "--->" << m.rbegin()->second << endl;
	cout << m.size();*/
	
	//7. stack语法
/*	stack<int> s;
	for(int i = 0;i < 6;i++)
	{
		s.push(i);
	} 
	cout << s.size() << endl;
	cout << "其中栈s的栈顶元素为：" << s.top() << endl;
	//弹出栈顶元素 
	s.pop();
	//栈无法使用for循环进行输出
	cout << s.size() << endl;
	cout << "其中栈s的栈顶元素为：" << s.top() << endl;*/
	
	//8. queue语法
/*	queue<int> q;
	for(int i = 0;i < 6;i++)
	{
		q.push(i);
	}
	cout << q.size() << endl;
	cout << "队头元素为：" << q.front() << " 队尾元素为：" << q.back() << endl;
	q.pop();// 移除队列的队首元素
	cout << "队头元素为：" << q.front() << " 队尾元素为：" << q.back() << endl;
*/
	//8. unordered_map和unordered_set使用
	 
/*	unordered_map<string,int> m;
	m["1"] = 2;
	cout << m["1"] << endl;
	cout << m["2"] << endl; // 访问map中key为"hello"的value, 如果key不存在，则返回0
	m["2"] = 5;
	m["0"] = 66;
	//unordered_map中越是后面赋值的反而在前面 
	//map输出 
	for(auto it = m.begin();it != m.end();it++)
	{
		cout << it->first << "--->" << it->second << endl;
	}
	//输出map中第一个 
	cout << m.begin()->first << "--->" << m.begin()->second << endl;
	cout << m.size();

	
	unordered_set<int> s;
	s.insert(1);
	cout << *(s.begin()) << endl;
	int tmp;
	for(int i = 0;i < 3;i++)
	{
		cin >> tmp;
		s.insert(tmp);
	}
	//unordered_set中越是后面赋值的反而在前面 
	for(auto it = s.begin();it != s.end();it++)
	{
		it == s.begin() ?   : cout << " ";
		cout << *it;
	}
	cout << endl << (s.find(2) != s.end()) << endl; //查找到了返回1即true 
	cout << (s.find(10) != s.end()) << endl;//未查找到返回0，即false 
	s.erase(1);//删除1元素 
	cout << (s.find(1) != s.end()) << endl;
*/
	
	return 0;
}
