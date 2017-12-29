/*
	Name: C++ Primer Plus 6 练习题 2.7 --5
	Copyright: 
	Author: 
	Date: 29/12/17 19:52
	Description: 温度转换，摄氏温度转为华氏温度 
*/

#include <iostream>

using namespace std;

float temconverse(float a); 

int main() 
{
	float a, b;
	cout << "Please enter a Celsius value: "; 
	cin >> a; 
	b = temconverse(a);
	cout << a << " degrees is " << b << " degrees Fahrenheit"; 
	return 0; 
} 

float temconverse(float a) 
{
	return 1.8 * a + 32.0;
}
