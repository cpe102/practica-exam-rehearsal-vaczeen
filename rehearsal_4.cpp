#include <iostream>
#include<string>
using namespace std;
//Write compress() here.
string conpress(string y)
{
	string x;
	int i=0,k=y.size();
	while(i<k)
	{
	x=x+y[i];	
	i=i+3;
	}
	return x;
}
int main()
{
    string a = conpress("ABCDEFGHIJKLMN");
    string b = conpress("123456");
    string c = conpress("HelloWorld");
    string d = conpress("BNK48");
    string e = conpress("COMPROG261102");
    string f = conpress("A");
    string g = conpress("AB");
    string h = conpress("ABC");
    string i = conpress("ABCD");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}
