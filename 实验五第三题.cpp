#include<iostream>
using namespace std;

class Volume
{
private:
	double longth, width, height;
public:
Volume(double a, double b, double c)
	{
		longth = a;
		width = b;
	    height = c;
	}
	void show()
	{
		double v = longth * width * height;
		cout << v << endl;
	}
void set(double longth, double width, double height)
	{
		this->longth = longth;
		this->width = width;
		this->height = height;
	}
};
int main()
{
	Volume A1(3.2, 5, 6);
	Volume A2(3.4, 2.6, 2.5);
	Volume A3(3.3, 4.5, 2.3);
	 A1.show();
	 A2.show();
	 A3.show();
	 return 0;
}