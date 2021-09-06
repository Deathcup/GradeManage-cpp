//学生成绩统计系统 

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
		cout<<"Error：未找到数据库"<<endl; 
		return 0;
	}
	else
	{
	//	cout<<"欢迎使用Steasy学生成绩管理系统"<<endl;
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
	cout<<"欢迎使用Steasy学生成绩管理系统"<<endl;
	cout<<"操作菜单："<<endl
		<<"1-输入学生成绩"<<endl
		<<"2-显示所有学生成绩"<<endl
		<<"0-退出"<<endl 
		<<"请输入操作代号："<<endl; 
	cin>>num;
	switch(num)
	{
		case 1:
		{
			string id,name;
			double score;
			cout<<"请输入学生id"<<endl;
			cin>>id;
			cout<<"请输入学生姓名"<<endl;
			cin>>name;
			cout<<"请输入学生成绩"<<endl; 
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
			cout<<"操作失败"<<endl;
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
				cout<<"是否继续操作:"<<endl
					<<"1-是"<<endl
					<<"0-否"<<endl;
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
	cout<<"感谢使用"<<endl; 
	return 0;
}

#endif
