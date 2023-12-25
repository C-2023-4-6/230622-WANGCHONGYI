#include<iostream>
using namespace std;
class Time
{
private:
	int H, M, S;
public:
	void settime(int H = 0, int M = 0, int S = 0)
	{
		this->H = H, this->M = M, this->S = S;
	}
	void showtine()
	{
		cout << H << ":" << M << ":" << S << endl;
	}
};
int main()
{
	Time Mytime;
	Mytime.settime(3, 45, 32);
	Mytime.showtine();
	return 0;

}
