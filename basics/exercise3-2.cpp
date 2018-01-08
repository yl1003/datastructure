/*
	Name: C++ Primer Plus 6 练习题 3.7 --2 
	Copyright: 
	Author: 
	Date: 08/01/18 19:30
	Description: BMI计算 
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	//1英尺=12英寸，1英寸=0.0254米， 1kg=2.2pounds 
	//BMI = 体重/身高的平方 
	const float HEIGHT_C = 0.0254, WEIGHT_C = 2.2; 
	int height_1, height_2;// 
	float weight_p;
	
	float BMI;
	
	float height, weight;//身高-米和体重-kg 
	
	cout << "输入你的身高(英尺和英寸分别输入)和体重（磅）: " ;
	
	cin >> height_1 >> height_2 >> weight_p;
	
	cout << "你的身高为" << height_1 << "英尺, "<< height_2 << "英寸" << endl; 
	height = (height_1 * 12 + height_2) * HEIGHT_C;
	cout <<  "你的身高为 " << height << " 米" << endl;
	weight = weight_p / 2.2 ;
	cout << "你的体重为 " << weight << " 千克" << endl;
	
	BMI = weight / (height * height);
	
	cout << "你的BMI是：" << BMI;
	
	return 0; 
} 
