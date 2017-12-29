/*
	Name: C++ Primer Plus 6 练习题 2.7 --6
	Copyright: 
	Author: 
	Date: 29/12/17 19:57
	Description: 单位转换，光年转天文单位 
*/

#include <iostream>

using namespace std;

double lightToAstr(double a); 

int main() 
{
	float a, b;
	cout << "Please enter a light year: "; 
	cin >> a; 
	b = lightToAstr(a);
	cout << a << " light years = " << b << " astronomical units"; 
	return 0; 
} 

double lightToAstr(double a) 
{
	return 63240 * a;
}
