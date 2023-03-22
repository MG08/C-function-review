#include<iostream>
using namespace std;

float Add5Divide2(int hi);
bool PointCollision(int x1, int y1, int x2, int y2);
int ToyGrabber()
int main() {

	int answer;

	answer = Add5Divide2(4);
	cout << answer;

}
float Add5Divide2(int hi) {

	return (hi+5)/2;
}


bool PointCollision(int x1, int y1, int x2, int y2) {
	if (x1 == x2) {
		if (y1 == y2)
			return true;
		else false
	}
	
}
