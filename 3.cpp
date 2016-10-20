#include <iostream>
#include <cmath>

using namespace std;


struct point{
	int x;
	int y;
	double distance(){
		return sqrt(x*x + y*y);
	}
	double distanceTo(point p2){
		return sqrt((x-p2.x)*(x-p2.x) + (y-p2.y)*(y-p2.y));
	}
};

int n;
point p[100];

int main(){

	cin >> n;
	
	for(int i =0 ; i < n; ++i){
		cin >> p[i].x >> p[i].y;
	}

	double d = 0;

	for(int i = 0; i < n - 1; ++i){
		for(int j = i + 1; j < n; ++j){
			double s = p[i].distanceTo(p[j]);
			if(d < s){
			    d = s;
			}
		}
	}

	printf("%.15f",d);

	return 0;
}

