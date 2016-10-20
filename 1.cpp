#include <iostream>
#include <cmath>

struct point{
	int x;
	int y;
};

using namespace std;

double f(int x,int y){
	return sqrt(x*x + y*y);
}

int main(){


	int n;
	cin >> n;

	point p[n];

	for(int i =0 ; i < n; ++i){
		cin >> p[i].x >> p[i].y;
	}

	double d = f(p[0].x,p[0].y);
	int ind = 0;

        for(int i = 1; i < n; ++i){
        	double r = f(p[i].x,p[i].y);
        	if(r > d){
        		d = r;
        		ind = i;
        	}
        }


        cout << p[ind].x  << " " << p[ind].y;

	return 0;
}