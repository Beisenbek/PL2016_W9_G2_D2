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

int main(){


	int n;
	cin >> n;

	point p[n];

	for(int i =0 ; i < n; ++i){
		cin >> p[i].x >> p[i].y;
	}

	int ind = 0;

        for(int i = 1; i < n; ++i){
        	if(p[i].distance() > p[ind].distance()){
        		ind = i;
        	}
        }

        cout << p[ind].x  << " " << p[ind].y;

	return 0;
}
