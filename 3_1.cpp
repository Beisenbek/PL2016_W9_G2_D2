#include <iostream>
#include <cmath>

using namespace std;


struct point{
	int x;
	int y;
};

int n;
point p[100];

double sqr(int t){
	return t * t;
}

double distanceBetween(point p1, point p2){
	return sqrt(sqr(p1.x-p2.x) + sqr(p1.y-p2.y));
} 

int main(){

	cin >> n;
	
	for(int i =0 ; i < n; ++i){
		cin >> p[i].x >> p[i].y;
	}

	double d = 0;

	for(int i = 0; i < n - 1; ++i){
		for(int j = i + 1; j < n; ++j){
			double s = distanceBetween(p[i],p[j]);
			if(d < s){
			    d = s;
			}
		}
	}

	printf("%.15f",d);

	return 0;
}

