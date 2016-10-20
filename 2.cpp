#include <iostream>
#include <cmath>

using namespace std;


struct point{
	int x;
	int y;
	double distance(){
		return sqrt(x*x + y*y);
	}
};

int n;
point p[100];

int main(){

	cin >> n;
	
	for(int i =0 ; i < n; ++i){
		cin >> p[i].x >> p[i].y;
	}

	double s1 = 0;
	double s2 = 0;

	for(int i = 0; i < n; ++i){
		s1 += p[i].x;
		s2 += p[i].y;
	}

	cout << s1/n << " " << s2/n;

	return 0;
}
