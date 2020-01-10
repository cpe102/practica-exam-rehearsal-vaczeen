#include <iostream>
#include<cmath>
using namespace std;
//Write sumSqrt() here.
double sumSqrt(double N)
{
	double a=1,b=2;
	while(b<=N)
	{
	a=a+1/sqrt(b);
	b++;	
	}
	if(N<=0)
	{
		return 0;
	}
	return a;
}

int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";

}
