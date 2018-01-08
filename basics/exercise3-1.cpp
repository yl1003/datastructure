/*
	Name: C++ Primer Plus 6 练习题 3.7 --1 
	Copyright: 
	Author: 
	Date: 08/01/18 19:06
	Description: 身高转换 
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	const float CONVER =  0.083;
	float height;
	cout << "输入你的身高(英寸): " ;
	cin >> height;
	
	cout << "你的身高为" << height*CONVER << "英尺"; 
	
	return 0; 
} 
