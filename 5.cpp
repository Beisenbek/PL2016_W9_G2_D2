#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

struct student{
	string sname;
	string name;
	double avg;
	int a;
	int b;
	int c;
};


int main(){

	vector<student> v;

	int n;

	cin >> n;

	for(int i = 0; i < n; ++i){
		student s;
		cin >> s.sname >> s.name >> s.a >> s.b >> s.c;
		s.avg = (s.a + s.b + s.c)/3.0;
		v.push_back(s);
	}

	for(int i = 0; i < n -1; ++i){
		for(int j = i + 1; j < n; ++j){
			if(v[i].avg < v[j].avg){
				swap(v[i],v[j]);
			}
		}
	}

	for(int i = 0; i < n; ++i){
		cout << v[i].sname << " " << v[i].name << endl; 
	}

	return 0;
}
