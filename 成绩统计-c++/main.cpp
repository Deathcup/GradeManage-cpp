//ѧ���ɼ�ͳ��ϵͳ 

#ifndef _MAIN_
#define _MAIN_

#include<bits/stdc++.h>
#include<windows.h>
#include"StData.h"
using namespace std;
const int maxn=10001;
StData Student[maxn];
int cnt;
bool open()
{
	ifstream infile("data.txt");
	if(!infile)
	{
		cout<<"Error��δ�ҵ����ݿ�"<<endl; 
		return 0;
	}
	else
	{
	//	cout<<"��ӭʹ��Steasyѧ���ɼ�����ϵͳ"<<endl;
		cnt=0;
		string id,name;
		double score;
		while(infile>>id>>name>>score)
		{
			cnt++;
			Student[cnt].set_id(id);
			Student[cnt].set_name(name);
			Student[cnt].set_score(score);
		}
		infile.close();
		return 1;
	}
}
bool work()
{
	int num;
	system("cls");
	cout<<"��ӭʹ��Steasyѧ���ɼ�����ϵͳ"<<endl;
	cout<<"�����˵���"<<endl
		<<"1-����ѧ���ɼ�"<<endl
		<<"2-��ʾ����ѧ���ɼ�"<<endl
		<<"0-�˳�"<<endl 
		<<"������������ţ�"<<endl; 
	cin>>num;
	switch(num)
	{
		case 1:
		{
			string id,name;
			double score;
			cout<<"������ѧ��id"<<endl;
			cin>>id;
			cout<<"������ѧ������"<<endl;
			cin>>name;
			cout<<"������ѧ���ɼ�"<<endl; 
			cin>>score;
			cnt++;
			Student[cnt].set_id(id);
			Student[cnt].set_name(name);
			Student[cnt].set_score(score);
			return 1;
		}
		case 2:
		{
			for(int i=1;i<=cnt;i++)
			{
				Student[i].show();
			}
			return 1;
		}
		case 0:
		{
			return 0;
		}
		default:
		{ 
			cout<<"����ʧ��"<<endl;
			return 1;
		}	
	}
}
void save()
{
	ofstream outfile("data.txt");
	for(int i=1;i<=cnt;i++)
	{
		outfile<<Student[i].get_id()
				<<" "<<Student[i].get_name()
				<<" "<<Student[i].get_score()<<endl;
	}
	outfile.close();
}
int main()
{
	if(!open())
		return 0;
	else
	{
		while(1)
		{
			if(!work())
			{
				break;
			}	
			else
			{
				cout<<"�Ƿ��������:"<<endl
					<<"1-��"<<endl
					<<"0-��"<<endl;
				int num;
				cin>>num;
				if(num)
					continue;
				else
					break;
			}
		}
	}
	save();
	cout<<"��лʹ��"<<endl; 
	return 0;
}

#endif
