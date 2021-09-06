#ifndef STDATA_H
#define STDATA_H

#include<bits/stdc++.h>
using namespace std;

class StData
{
	public:
		StData();
		void set_id(string id);
		void set_name(string name);
		void set_score(double score);
		string get_id();
		string get_name();
		double get_score();
		void show();
	private:
		string _id;
		string _name;
		double _score;
};

#endif
