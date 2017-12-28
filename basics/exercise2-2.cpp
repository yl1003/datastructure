/*
	Name: C++ Primer Plus 6 练习题 2.7 --2 
	Copyright: 
	Author: yulei
	Date: 28/12/17 21:55
	Description: 单位转换 
*/
#include <iostream>

using namespace std;

int main() 
{
	long distance;
	cout << "请输入距离,单位为long" << endl; 
	cin >> distance; 
	 
	cout << "转换后的距离为" << distance*220 << "，单位为码，1 long 等于 220 码"; 
	return 0; 
} 

