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
// 	//vector<int>ilist={1,2,3,4,5,6,7};//�α������޷����룬�汾���ͣ���֧��c++11��
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
// 	array<int,34>::size_type i;//array ��һ���� ���� int��char�� 
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
//��list���char*ָ��Ԫ�ظ�ֵ��vector�е�string
//int main()
//{
//		list<char*> ilist��5,"dfdsj")/*{"a","b","c","d"}*/;
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
//�Ƚ�list�е�Ԫ�غ�vector�е�Ԫ��
// bool l_v_equal(vector<int>&ivec,list<int>&ilist)
 // {//�Ƚ�list��vector�Ĵ�С
 // 	if (ilist.size()!=ivec.size())
 // 	{
 // 		return false;
 // 
 // 		auto lb=ilist.cbegin();//list��Ԫ��
 // 		auto le=ilist.cend();//listβ��Ԫ��
 // 		auto vb=ivec.cbegin();//vector��Ԫ��
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
//	while ((p=s.find(oldVal,p))!=string::npos)//��s�в���oldval
//	{
//		s.replace(p,oldVal.size(),newVal);//���ҵ����Ӵ��滻Ϊnewval������
//		p+=newVal.size();//�±�������²�������֮��
//	}
//}
//void replace_string(string &s,const string &oldVal,const string &newVal)
//{
//	auto l=oldVal.size();
//	if (!l)//Ҫ���ҵ��ַ���Ϊ��
//		return;
//	auto iter=s.begin();
//	while (iter<=s.end()-1)//ĩβ����oldval���ȵĲ���������
//	{
//		auto iter1=iter;
//		auto iter2=oldVal.begin();//s��iter��ʼ���ַ�������ÿ���ַ�����oldval��ͬ
//		while (iter2!=oldVal.end()&&*iter1==*iter2)
//		{
//			iter1++;
//			iter2++;
//		}
//		if(iter2==oldVal.end())//oldVal�ľ�----�ַ������
//		{
//			iter=s.erase(iter,iter1);//ɾ��s����oldval��Ȳ���
//			if (newVal.size())//�滻�Ӵ��Ƿ�Ϊ��
//			{
//				iter2=newVal.end();//�ɺ���ǰ�������newval�е��ַ�
//				do {iter2--;
//					iter=s.insert(iter,*iter2);
//				} while (iter2>newVal.begin());
//			}
//			iter+=newVal.size();//�������ƶ����²�������֮��
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
	//while ((p=s.find(oldVal,p))!=string::npos)//��s�в���oldval
	//{
	//	s.replace(p,oldVal.size(),newVal);//���ҵ����Ӵ��滻Ϊnewval������
	//	p+=newVal.size();//�±�������²�������֮��
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
//	name.insert(name.begin(),prefix.begin(),prefix.end());//����ǰ׺
//	//name.insert(0,prefix);//����ǰ׺
//	name.insert(name.size()," ");
//	//name.insert(name.size(),suffix);//�����׺
//	name.insert(name.end(),suffix.begin(),suffix.end());//�����׺
//	//name.append("  ");
//	//name.append(suffix.begin(),suffix.end());//�����׺
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
// 	cout<<"��"<<name<<"�в���"<<chars<<"���ַ�"<<endl;
// 	cout<<"�������е�����"<<endl;
// 	string::size_type pos =0;
// 	while((pos=name.find_first_of(chars,pos))!=string::npos)
// 	{
// 		cout<<"found number at index : "<<pos<<"  element is "<<name[pos]<<endl;
// 		++pos;
// 		
// 	}
// 
// 	cout<<endl<<"��"<<name<<"�в��Ҳ���"<<chars<<"���ַ�"<<endl;
// 	cout<<"�������еĲ�������"<<endl;
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
// 			continue;                       //�����ϳ�ͷ���³�ͷ��ĸ
// 		cout<<s<<" ";
// 		if (max_length<(int)s.size())
// 		{
// 			max_length=s.size();       //�µ��ʸ���
// 			longest_word=s;				//��¼���Ⱥ͵���
// 		}
// 	}
// 	cout<<endl<<"��ַ���: "<<longest_word<<endl;
// }
// 
// int main(int argc,char*argv[])
// {
// 
// 	ifstream in (argv[1]);//���ļ�
// 	if (!in)
// 	{
// 		cerr<<"�޷��������ļ�"<<endl;
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
//	cout<<"��: "<<sum<<endl;
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
// 	cout<<"��: "<<sum<<endl;
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
���һ���࣬��������unsigned��Ա���ֱ��ʾ�꣬�º��ա�Ϊ���д���캯��������һ����ʾ���ڵ�string��������Ĺ��캯��Ӧ���ܴ���ͬ���ݸ�ʽ����January1��1900��1/1/1990��Jan 1 1900�ȡ�
-----------------------------------------------------------------**/
//int main()
//{
//	
//	string dates[]={"Feb 2 2017","Feb 1 2014","237��1��7��","1/1/2014","3 1 2014","3/1/2014",};
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

//��ʾջ�ж���Ĳ�ͬ����
enum obj_type{LP,RP,ADD,SUB,VAL};
struct obj 
{
	obj(obj_type type,double val=0)
	{t=type;v=val;}
	obj_type t;
	double v;
};
//��һ�����ǿո���ַ�
inline void skipws(string &exp,size_t &p)
{
	p=exp.find_first_not_of(" ",p);
}

inline void new_val(stack<obj>&so,double v)
{
	if (so.empty()||so.top().t==LP)
	{
		//��ջ��������
		so.push(obj(VAL,v));
		//cout<<"push"<<v<<endl;
	}else if (so.top().t==ADD||so.top().t==SUB)
	{
		//֮ǰ�������
		obj_type type =so.top().t;
		so.pop();
		if(type==ADD)
		cout<<"pop+"<<endl;
		else cout<<"pop-"<<endl;
		cout<<"pop"<<so.top().v<<endl;
		//ִ�мӼ���
		if(type==ADD)
			v+=so.top().v;
		else v=so.top().v-v;
		so.pop();
		so.push(obj(VAL,v));//������ѹջ
		//cout<<"push"<<v<<endl;
	}else throw invalid_argument("ȱ�������");
}

int  main()
{
	stack<obj>so;
	string exp;
	size_t p=0,q;
	double v;

	cout<<"��������ʽ"<<endl;
	getline(cin ,exp);

	while(p<exp.size()){
		skipws(exp,p);//�����ո�
		if(exp[p]=='('){
			so.push(obj(LP));//������ֱ��ѹջ
			p++;
			cout<<"push LP"<<endl;

		}else if (exp[p]=='+'||exp[p]=='-'){
			//�������
			if(so.empty()||so.top().t!=VAL)
				//��ջ��֮ǰ����������
				throw invalid_argument("ȱ��������");
			if(exp[p]=='+')//�����ѹջ
				so.push(obj(ADD));
			else so.push(obj(SUB));
			p++;
			cout<<"push"<<exp[p-1]<<endl;
		}else if(exp[p]==')'){
			p++;
			if(so.empty())//֮ǰ����Ե�������
				throw invalid_argument("δƥ��������");
			if(so.top().t==LP)//һ������֮��������
				throw invalid_argument("������");
			if(so.top().t==VAL){
				//��ȷ��������������
				v=so.top().v;
				so.pop();
				cout<<"pop"<<v<<endl;

				if(so.empty()||so.top().t!=LP)
					throw invalid_argument("δƥ��������");
				so.pop();
				cout<<"pop LP"<<endl;
				new_val(so,v);//����������߼�һ��

			}else//ջ�������������
				throw invalid_argument("ȱ��������");
		}else {//Ӧ����������
				v=stod(exp.substr(p),&q);
				p+=q;
				new_val(so,v);
		}
	}
	
	if(so.size()!=1||so.top().t!=VAL)
		throw invalid_argument("�Ƿ����ʽ");
	cout<<so.top().v<<endl;
	system("pause");
	return 0;

}