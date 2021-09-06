#include "stdata.h"

#include<bits/stdc++.h>
using namespace std;

StData::StData()
{
	_id="";
	_name="";
	_score=0;
}

void StData::set_id(string id)
{
	_id=id;
}

void StData::set_name(string name)
{
	_name=name;
}

void StData::set_score(double score)
{
	_score=score;
}

void StData::show()
{
	cout<<_id<<"¡¡"<<_name<<" "<<_score<<endl; 
}

string StData::get_id()
{
	return _id;
}

string StData::get_name()
{
	return _name;
}

double StData::get_score()
{
	return _score;
}
