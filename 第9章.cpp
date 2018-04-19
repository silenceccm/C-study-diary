//#include"date.h"
#include<iostream>
#include<fstream>
#include <iterator>
#include<string>
#include <vector>
#include <array>
#include<numeric>
#include <list>
#include<forward_list>
#include<stack>
#include<deque>
#include<stdexcept>

using namespace std;

// bool search_vec(vector<int>::iterator beg,vector<int>::iterator end,int val)
// {
// 	for (;beg!=end;beg++)
// 	{
// 		if (*beg==val)
// 		{return true;}
// 		return false;
// 	}
// }
// int main()
// {
// 	//vector<int>ilist={1,2,3,4,5,6,7};//次编译器无法编译，版本过低，不支持c++11！
// 	vector<int>ilist(7,2);
// 	cout<<search_vec(ilist.begin(),ilist.end(),2)<<endl;
// 	cout<<search_vec(ilist.begin(),ilist.end(),8)<<endl;
// 
// 	system("pause");
// 	return 0;
// }
//---------------------------------------//

// vector<int>::iterator search_vec(vector<int>::iterator beg,vector<int>::iterator end,int val)
// {
// 	for (;beg!=end;beg++)
// 	{
// 		if (*beg==val)
// 		{return beg;}
// 		return end;
// 	}
// }
// int main()
// {
// 	
// 	vector<int>ilist(8,5);
// 	for (int i=6;i<15;i++)
// 	{
// 		ilist.push_back(i);
// 	}
// 
// 	array<int,34>::size_type i;//array 是一个组 关于 int、char等 
// 
// 	vector<int>::iterator it2=ilist.begin();
// 	auto it1=ilist.cbegin();
// 	cout<<*it2<<endl;
// 	cout<<*it1<<endl;
// 	cout<<*ilist.begin()<<endl;
// 	cout<<search_vec(ilist.begin(),ilist.end(),5)-ilist.begin()<<endl;
// 	cout<<search_vec(ilist.begin(),ilist.end(),4)-ilist.begin()<<endl;
// 
// 	system("pause");
// 	return 0;
// }
//---------------------------------------//

// int main()
// {
//	list<int> ilist{1,2,3,4,5,6,7};
//	vector<int> ivec{7,6,5,4,3,2,1};
//	vector<double> dvec(ilist.begin(),ilist.end());
//	vector<double> dvec1(ivec.begin(),ivec.end());
//
//	cout<<dvec.capacity()<<" "<<dvec.size()<<" "<<dvec[0]<<" "<<dvec[dvec.size()-1]<<endl;
//	cout<<dvec1.capacity()<<" "<<dvec1.size()<<" "<<dvec1[0]<<" "<<dvec1[dvec1.size()-1]<<endl;
//---------------------------------------//
//将list类的char*指针元素赋值给vector中的string
//int main()
//{
//		list<char*> ilist（5,"dfdsj")/*{"a","b","c","d"}*/;
//		//vector<string> ivec{"aa","bb","cc","dd"};
//		vector<string> dvec;
//		dvec.assign(ilist.cbegin(),ilist.cend());
//		//vector<char*> dvec1;
//		//dvec1.assign(ivec.cbegin(),ivec.cend());
//
//		cout<<dvec.capacity()<<" "<<dvec.size()<<" "<<dvec[0]<<" "<<dvec[dvec.size()-1]<<endl;
//		//cout<<dvec1.capacity()<<" "<<dvec1.size()<<" "<<dvec1[0]<<" "<<dvec1[dvec1.size()-1]<<endl;
//
//		return 0;
//	
//}
//---------------------------------------//

 //int main()
 //{
	//vector<int> ivec1{7,6,5,4,3,2,1};
	//vector<int> ivec2{5,4,3,2,1};
	//vector<int> ivec3{7,6,5,4,3,2,1};
	//vector<int> ivec4{8,6,5,4,3,2,1};
	//vector<int> ivec5{6,7,5,4,3,2,1};

	//cout<<(ivec1==ivec3)<<endl;	
	//cout<<(ivec1==ivec2)<<endl;
	//cout<<(ivec1==ivec4)<<endl;
	//cout<<(ivec1==ivec5)<<endl;
	//ivec1.push_back(8);
	//ivec1.pop_back();

	//cout<<ivec1.capacity()<<" "<<ivec1.size()<<" "<<ivec1[0]<<" "<<ivec1[ivec1.size()-1]<<endl;
	//cout<<(ivec1==ivec3)<<endl;
	//return 0;
 //}

 //---------------------------------------//
//比较list中的元素和vector中的元素
// bool l_v_equal(vector<int>&ivec,list<int>&ilist)
 // {//比较list和vector的大小
 // 	if (ilist.size()!=ivec.size())
 // 	{
 // 		return false;
 // 
 // 		auto lb=ilist.cbegin();//list首元素
 // 		auto le=ilist.cend();//list尾后元素
 // 		auto vb=ivec.cbegin();//vector首元素
 // 		for (;lb!=le;vb++,lb+=)
 // 		{
 // 			if (*lb!=*vb)
 // 			{
 // 				return false;
 // 			}
 // 		return true;
 // 		}
 // 	}
 // }
 // size_t
// int main()
// {
// 	vector<int> ivec{5,4,3,2,1,7,6};
// 
// 	list<int> ilist{5,4,3,2,1};
// 	list<int> ilist1{5,4,3,2,1,7,6};
// 	list<int> ilist2{5,4,3,2,1,8,6};
// 	list<int> ilist3{5,4,3,2,1,6,7};
// 	cout<<ivec.capacity()<<" "<<ivec.size()<<" "<<ivec[0]<<" "<<ivec[ivec.size()-1]<<endl;
// 	ivec.erase(ivec.begin()+1,ivec.begin()+2);
// /*	list.erase_after(list.begin()+7);*/
// // 	cout<<l_v_equal(ivec,ilist)<<endl;	
// // 	cout<<l_v_equal(ivec,ilist1)<<endl;	
// // 	cout<<l_v_equal(ivec,ilist2)<<endl;	
// // 	cout<<l_v_equal(ivec,ilist3)<<endl;	
// 
// 
// 	cout<<ivec.capacity()<<" "<<ivec.size()<<" "<<ivec[0]<<" "<<ivec[ivec.size()-1]<<endl;
// 
// 	return 0;
// }

//---------------------------------------//
// int main( )
// {
// 	//string a="asdf",b="zxcv";
// 	//int a=12,b=34;
// 	int a=12,b=34;
// 	
// 	int*c=&a;
// 	cout<<&a<<" "<<&b<<" "<<endl;
// 	cout<<a<<" "<<b<<endl;
// 	cout<<c<<" "<<*c<<" "<<&c<<" "<<*&c<<" "<<**(&c)<<endl<<endl<<endl<<endl;
// 	a=a^b;
// 	b=a^b;
// 	a=a^b;
// 	cout<<&a<<" "<<&b<<endl;
// 	cout<<a<<" "<<b<<endl;
// 	cout<<c<<" "<<*c<<" "<<&c<<endl;
// 
// }

//---------------------------------------//

//void replace_string(string &s,const string &oldVal,const string &newVal)
//{
//	int p=0;
//	while ((p=s.find(oldVal,p))!=string::npos)//在s中查找oldval
//	{
//		s.replace(p,oldVal.size(),newVal);//将找到的子串替换为newval的内容
//		p+=newVal.size();//下标调整到新插入内容之后
//	}
//}
//void replace_string(string &s,const string &oldVal,const string &newVal)
//{
//	auto l=oldVal.size();
//	if (!l)//要查找的字符串为空
//		return;
//	auto iter=s.begin();
//	while (iter<=s.end()-1)//末尾少于oldval长度的部分无需检查
//	{
//		auto iter1=iter;
//		auto iter2=oldVal.begin();//s中iter开始的字符串逆序每个字符都与oldval相同
//		while (iter2!=oldVal.end()&&*iter1==*iter2)
//		{
//			iter1++;
//			iter2++;
//		}
//		if(iter2==oldVal.end())//oldVal耗尽----字符串相等
//		{
//			iter=s.erase(iter,iter1);//删除s中与oldval相等部分
//			if (newVal.size())//替换子串是否为空
//			{
//				iter2=newVal.end();//由后至前逐个插入newval中的字符
//				do {iter2--;
//					iter=s.insert(iter,*iter2);
//				} while (iter2>newVal.begin());
//			}
//			iter+=newVal.size();//迭代器移动到新插入内容之后
//		}
//		else iter++;
//	}
//}
//int main()
//{
//	string s="tho thru tho!";
//	replace_string(s,"thru","through");
//	cout<<s<<endl;
//
//	
//	replace_string(s,"tho","though");
//	cout<<s<<endl;
//
//
//	replace_string(s,"through","");
//	cout<<s<<endl;
//	system("pause");
//	return 0;
//
//}
//--------------------------------------------------//

	//int p=0;
	//while ((p=s.find(oldVal,p))!=string::npos)//在s中查找oldval
	//{
	//	s.replace(p,oldVal.size(),newVal);//将找到的子串替换为newval的内容
	//	p+=newVal.size();//下标调整到新插入内容之后
	//}

	//string ::size_type pos =0;
	//while(pos=name.find_first_of(nembers,pos)!=string::npos)
	//{
	//	cout<<"found number at index : "<<pos<<"element is "<<name[pos]<<endl;
	//	++pos;
	//}
//--------------------------------------------------//
//void name_string(string & name,const string &prefix,const string&suffix)
//{
//	name.insert(0," ");
//	name.insert(name.begin(),prefix.begin(),prefix.end());//插入前缀
//	//name.insert(0,prefix);//插入前缀
//	name.insert(name.size()," ");
//	//name.insert(name.size(),suffix);//插入后缀
//	name.insert(name.end(),suffix.begin(),suffix.end());//插入后缀
//	//name.append("  ");
//	//name.append(suffix.begin(),suffix.end());//插入后缀
//}
//int main()
//{
//	string s="James Bond";
//	name_string(s,"Mr.","II");
//	cout<<s<<endl;
//
//	s="M";
//	name_string(s,"Mrs.","III");
//	cout<<s<<endl;
//
//	system("pause");
//	return 0;
//	
//}

//--------------------------------------------------//
// void name_string( string & name,const string &chars)
// {
// 	cout<<"在"<<name<<"中查找"<<chars<<"中字符"<<endl;
// 	cout<<"查找所有的数字"<<endl;
// 	string::size_type pos =0;
// 	while((pos=name.find_first_of(chars,pos))!=string::npos)
// 	{
// 		cout<<"found number at index : "<<pos<<"  element is "<<name[pos]<<endl;
// 		++pos;
// 		
// 	}
// 
// 	cout<<endl<<"在"<<name<<"中查找不是"<<chars<<"中字符"<<endl;
// 	cout<<"查找所有的不是数字"<<endl;
// 	string::size_type pos1=0;
// 	while((pos1=name.find_first_not_of(chars,pos1))!=string::npos)
// 	{
// 		cout<<"found not number at index : "<<pos1<<"  element is "<<name[pos1]<<endl;
// 		pos1++;
// 		
// 	}
// }
// int main()
// {
// 	string numbers("0123456789");
// 	string name("ab2c3d7R4E6");
// 	
// 
// 	name_string(name,"0123456789");
// 
// 	system("pause");
// 	return 0;
// 
// }
//--------------------------------------------------//
// void find_longest_word(ifstream &in)
// {
// 	string s,longest_word;
// 	int max_length=0;
// 
// 	while(in>>s)
// 	{
// 		if (s.find_first_of("bdfghjklqpty")!=string::npos)
// 			continue;                       //包含上出头或下出头字母
// 		cout<<s<<" ";
// 		if (max_length<(int)s.size())
// 		{
// 			max_length=s.size();       //新单词更长
// 			longest_word=s;				//记录长度和单词
// 		}
// 	}
// 	cout<<endl<<"最长字符串: "<<longest_word<<endl;
// }
// 
// int main(int argc,char*argv[])
// {
// 
// 	ifstream in (argv[1]);//打开文件
// 	if (!in)
// 	{
// 		cerr<<"无法打开输入文件"<<endl;
// 		return -1;
// 	}
// 	find_longest_word(in);
// 
// 	system("pause");
// 	return 0;
// }
// --------- [1/19/2018 Administrator]//
//int main()
//{
//	vector<string>vs;
//	string a="123",b="+345",c="-634";
//	vs.push_back(a);
//	vs.push_back(b);
//	vs.push_back(c);
//
//	int sum =0;
//
//	for (auto iter=vs.begin();iter!=vs.end();iter++)
//	{
//		sum+=stoi(*iter);
//	}
//	cout<<"和: "<<sum<<endl;
//	system("pause");
//	return 0;
//
//}
//  [1/19/2018 Administrator]---------------//
// int main()
// {
// 	vector<string>vs;
// 	string a="123.34",b="+345.23",c="-63.4",d="6E-2";
// 	vs.push_back(a);
// 	vs.push_back(b);
// 	vs.push_back(c);
// 	vs.clear();
// 	vs.push_back(d);
// 	float sum =0;
// 
// 	for (auto iter=vs.begin();iter!=vs.end();iter++)
// 	{
// 		sum+=stof(*iter);
// 	}
// 	cout<<"和: "<<sum<<endl;
// 	system("pause");
// 	return 0;
// 
// }
//  [1/19/2018 Administrator]---------------//
//int main()
//{
//	vector <string> v;
//	 	string a="123.34",b="+345.23",c="-63.4",d="6E-2";
//	 	v.push_back(a);
//	 	v.push_back(b);
//	 	v.push_back(c);
//	string sum=accumulate(v.begin(),v.end(),string(""));
//	
//	 	for (auto iter=v.begin();iter!=v.end();iter++)
//	 	{
//	 		cout<<"v: "<<*iter<<endl;
//	 	}
//		for (auto iter=sum.begin();iter!=sum.end();iter++)
//		{
//			cout<<"sum: "<<*iter<<endl;
//		}
//	
//
//	system("pause");
//	return 0;
//}
//--------------------------------------//
/*--------------------------------------
设计一个类，它有三个unsigned成员，分别表示年，月和日。为其编写构造函数，接受一个表示日期的string参数。你的构造函数应该能处理不同数据格式，如January1，1900、1/1/1990、Jan 1 1900等。
-----------------------------------------------------------------**/
//int main()
//{
//	
//	string dates[]={"Feb 2 2017","Feb 1 2014","237年1月7日","1/1/2014","3 1 2014","3/1/2014",};
//	try 
//	{
//		for(int i=0;i<sizeof(dates)/sizeof(*dates);i++)
//		{
//			auto ds=dates[i];
//			cout<<ds<<endl;
//			date d1(ds);
//			cout<<d1;
//		}
//	}
//	catch (invalid_argument e)
//		{
//			cout<<e.what()<<endl;
//		}
//	system("pause");
//	return 0;
//}

//表示栈中对象的不同类型
enum obj_type{LP,RP,ADD,SUB,VAL};
struct obj 
{
	obj(obj_type type,double val=0)
	{t=type;v=val;}
	obj_type t;
	double v;
};
//第一个不是空格的字符
inline void skipws(string &exp,size_t &p)
{
	p=exp.find_first_not_of(" ",p);
}

inline void new_val(stack<obj>&so,double v)
{
	if (so.empty()||so.top().t==LP)
	{
		//空栈或左括号
		so.push(obj(VAL,v));
		//cout<<"push"<<v<<endl;
	}else if (so.top().t==ADD||so.top().t==SUB)
	{
		//之前是运算符
		obj_type type =so.top().t;
		so.pop();
		if(type==ADD)
		cout<<"pop+"<<endl;
		else cout<<"pop-"<<endl;
		cout<<"pop"<<so.top().v<<endl;
		//执行加减法
		if(type==ADD)
			v+=so.top().v;
		else v=so.top().v-v;
		so.pop();
		so.push(obj(VAL,v));//运算结果压栈
		//cout<<"push"<<v<<endl;
	}else throw invalid_argument("缺少运算符");
}

int  main()
{
	stack<obj>so;
	string exp;
	size_t p=0,q;
	double v;

	cout<<"请输入表达式"<<endl;
	getline(cin ,exp);

	while(p<exp.size()){
		skipws(exp,p);//跳过空格
		if(exp[p]=='('){
			so.push(obj(LP));//左括号直接压栈
			p++;
			cout<<"push LP"<<endl;

		}else if (exp[p]=='+'||exp[p]=='-'){
			//新运算符
			if(so.empty()||so.top().t!=VAL)
				//空栈或之前不是运算数
				throw invalid_argument("缺少运算数");
			if(exp[p]=='+')//运算符压栈
				so.push(obj(ADD));
			else so.push(obj(SUB));
			p++;
			cout<<"push"<<exp[p-1]<<endl;
		}else if(exp[p]==')'){
			p++;
			if(so.empty())//之前无配对的左括号
				throw invalid_argument("未匹配右括号");
			if(so.top().t==LP)//一对括号之间无内容
				throw invalid_argument("空括号");
			if(so.top().t==VAL){
				//正确：括号内运算结果
				v=so.top().v;
				so.pop();
				cout<<"pop"<<v<<endl;

				if(so.empty()||so.top().t!=LP)
					throw invalid_argument("未匹配右括号");
				so.pop();
				cout<<"pop LP"<<endl;
				new_val(so,v);//与新运算符逻辑一致

			}else//栈顶必须是运算符
				throw invalid_argument("缺少运算数");
		}else {//应该是运算数
				v=stod(exp.substr(p),&q);
				p+=q;
				new_val(so,v);
		}
	}
	
	if(so.size()!=1||so.top().t!=VAL)
		throw invalid_argument("非法表达式");
	cout<<so.top().v<<endl;
	system("pause");
	return 0;

}