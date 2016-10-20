#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

struct point{
	int x;
	int y;
	double d;
};

double f(int x,int y){
	return sqrt(x*x + y*y);
}

vector<point> p;

int main(){


	int n;
	cin >> n;
                   

	for(int i =0 ; i < n; ++i){
		point c;
		cin >> c.x >> c.y;
		p.push_back(c);
		p[i].d = f(p[i].x,p[i].y);
	}
                         
	for(int i = 0; i < n -1; ++i){
		for(int j = i + 1; j < n; ++j){
			if(p[i].d > p[j].d){
				swap(p[i],p[j]);
			}
		}
	}

	for(int i =0 ; i < n; ++i){
		cout << p[i].x << " " << p[i].y << endl;
	}

	return 0;
}
