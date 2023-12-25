#include<iostream>
using namespace std;

class Point
{
private:
	int x = 60;
	int y = 80;
public:
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")";
	}
};
int main()
{
	Point a1;
	a1.display();
	
	int i, j;
	cin >> i;
	cin >> j;
	a1.setPoint(i, j);
	a1.display();
	return 0;
}
