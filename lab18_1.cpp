#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect A,Rect B)
{
	// if(A.x > B.x+B.w || B.x > A.x+A.w || A.y < B.y+B.h || B.y < A.y+A.h)
	// {
	// 	return false;
	// }
	// else return true;
	double y1 = min(A.y,B.y);
	double y2 = max(A.y-A.h,B.y-B.h);
	double hy = y1-y2;

	double x1 = max(A.x,B.x);
	double x2 = min(A.x+A.w,B.x+B.w);
	double wx = x2-x1;

	if(hy*wx < 0)
	{
		return 0;
	}
	else return hy*wx;

}

int main(){
	Rect A;
	Rect B;
	cout << "Please input Rect 1 (x y w h): ";
	cin >> A.x;
	cin >> A.y;
	cin >> A.w;
	cin >> A.h;
	cout << "Please input Rect 2 (x y w h): ";
	cin >> B.x;
	cin >> B.y;
	cin >> B.w;
	cin >> B.h;
	cout << "Overlap area = " << overlap(A,B);	
	return 0;
}
