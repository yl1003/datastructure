/*
	Name: C++ Primer Plus 6 ��ϰ�� 2.7 --5
	Copyright: 
	Author: 
	Date: 29/12/17 19:52
	Description: �¶�ת���������¶�תΪ�����¶� 
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
