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
	//�Զ���cmp 
	vector<int> a(5);//�˴�������ʹ��[] 
	for(int i = 0;i < 5;i++)
	{
		cin >> a[i];
	}
	//�޸�Ϊ�Ӵ�С����Ĭ�ϴ�С���� 
	sort(a.begin(),a.end(),cmp);//vectorʹ������ 
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
	//����ʹ������ 
	sort(b,b+5,cmp);
	for(int i = 0;i < 5;i++)
	{
		cout << b[i] << " ";
	}
	
	//1. �ṹ�������ַ����﷨ 
	/*for(int i = 0;i < 3;i++)
	{
		cin >> stu[i].id;
		getchar();
		getline(cin,stu[i].name);
	}
	//����string��vector��map��queue��stack�ȶ��������������Զ���һ�㶼��ֱ�ӵ��÷���
	//��ֱ��string.length()֮��ģ�ʹ��.���㣩���������ƶ��� 
	for(int i = 0;i < 3;i++)
	{
		cout << stu[i].id << "-----" << stu[i].name << " len(name): " << stu[i].name.length() << endl;
		cout << "�ӵ�һ���ַ������ȡ�����ַ���" << stu[i].name.substr(0) << endl;
		//���е�һ������Ϊ�±꣬��0��ʼ�������Ǳ����伴[ 
		cout << "�ӵ�һ���ַ������ȡ�����ַ���" << stu[i].name.substr(1,2) << endl;
	}
	
	string s;
	getline(cin,s);
	cout << s << endl;
	printf("%s\n",s.c_str());//ʹ��printf���string��Ҫ��c_str() 
	//���±�2��ʼ���� 
	//string::npos���������������е�end()��־�����磺s.end() 
	if(s.find("abc",2) != string::npos)
	{
		int index = s.find("abc");
		cout << index << endl;
		cout << "�ҵ���";
	}
*/

	//2. #define E 2.88888888 ���峣���﷨ 
	/*2.88889Ĭ�����coutֻ������λ��Ч���� 
	cout << E << endl;
	printf("%.11f",E);*/
	
	//3. pair�﷨ 
	
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
	
	
	//4. vector�﷨ 
	
/*	vector<int> a;
	cout << a.size() << endl;
	//vector�����ʼ��5��99 
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
	b.resize(5);//���¸ı��С����������Ϊԭ�е�b�����е�ǰ������� 
	cout << "-------------------"<<endl;
	cout << b.size() << endl;
	for(int i = 0;i < b.size();i++)
	{
		cout << b[i];
		i < b.size()-1 ? cout << "\t" : cout << endl;
	}
	//��b�е��������Ԫ�ص��� 
	for(int i = 0;i < 2;i++)	b.pop_back();
	cout << "-------------------"<<endl;
	cout << b.size() << endl;
	for(int i = 0;i < b.size();i++)
	{
		cout << b[i];
		i < b.size()-1 ? cout << "\t" : cout << endl;
	}
	//���������vector�������� 
	for(auto it=b.begin();it!=b.end();it++)
	{
		it == b.begin() ?   : cout << " ";
		cout << *it;
	}*/
	
	//5. set�﷨��setĬ��ȥ�ز��һ��С�������� 
	
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
	cout << endl << (s.find(2) != s.end()) << endl; //���ҵ��˷���1��true 
	cout << (s.find(10) != s.end()) << endl;//δ���ҵ�����0����false 
	s.erase(1);//ɾ��1Ԫ�� 
	cout << (s.find(1) != s.end()) << endl;*/ 
	
	//6. map�﷨ 
	
/*	map<string,int> m;
	//map�е����ݽ�������keyֵ�Ĵ�С��С����������� 
	m["hello"] = 2;
	cout << m["hello"] << endl;
	cout << m["world"] << endl; // ����map��keyΪ"hello"��value, ���key�����ڣ��򷵻�0
	m["world"] = 5;
	m[","] = 66;
	//map��� 
	for(auto it = m.begin();it != m.end();it++)
	{
		cout << it->first << "--->" << it->second << endl;
	}
	//���map�е�һ�� 
	cout << m.begin()->first << "--->" << m.begin()->second << endl;
	//���map�����һ�� 
	cout << m.rbegin()->first << "--->" << m.rbegin()->second << endl;
	cout << m.size();*/
	
	//7. stack�﷨
/*	stack<int> s;
	for(int i = 0;i < 6;i++)
	{
		s.push(i);
	} 
	cout << s.size() << endl;
	cout << "����ջs��ջ��Ԫ��Ϊ��" << s.top() << endl;
	//����ջ��Ԫ�� 
	s.pop();
	//ջ�޷�ʹ��forѭ���������
	cout << s.size() << endl;
	cout << "����ջs��ջ��Ԫ��Ϊ��" << s.top() << endl;*/
	
	//8. queue�﷨
/*	queue<int> q;
	for(int i = 0;i < 6;i++)
	{
		q.push(i);
	}
	cout << q.size() << endl;
	cout << "��ͷԪ��Ϊ��" << q.front() << " ��βԪ��Ϊ��" << q.back() << endl;
	q.pop();// �Ƴ����еĶ���Ԫ��
	cout << "��ͷԪ��Ϊ��" << q.front() << " ��βԪ��Ϊ��" << q.back() << endl;
*/
	//8. unordered_map��unordered_setʹ��
	 
/*	unordered_map<string,int> m;
	m["1"] = 2;
	cout << m["1"] << endl;
	cout << m["2"] << endl; // ����map��keyΪ"hello"��value, ���key�����ڣ��򷵻�0
	m["2"] = 5;
	m["0"] = 66;
	//unordered_map��Խ�Ǻ��渳ֵ�ķ�����ǰ�� 
	//map��� 
	for(auto it = m.begin();it != m.end();it++)
	{
		cout << it->first << "--->" << it->second << endl;
	}
	//���map�е�һ�� 
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
	//unordered_set��Խ�Ǻ��渳ֵ�ķ�����ǰ�� 
	for(auto it = s.begin();it != s.end();it++)
	{
		it == s.begin() ?   : cout << " ";
		cout << *it;
	}
	cout << endl << (s.find(2) != s.end()) << endl; //���ҵ��˷���1��true 
	cout << (s.find(10) != s.end()) << endl;//δ���ҵ�����0����false 
	s.erase(1);//ɾ��1Ԫ�� 
	cout << (s.find(1) != s.end()) << endl;
*/
	
	return 0;
}
