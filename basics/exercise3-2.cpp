/*
	Name: C++ Primer Plus 6 ��ϰ�� 3.7 --2 
	Copyright: 
	Author: 
	Date: 08/01/18 19:30
	Description: BMI���� 
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	//1Ӣ��=12Ӣ�磬1Ӣ��=0.0254�ף� 1kg=2.2pounds 
	//BMI = ����/��ߵ�ƽ�� 
	const float HEIGHT_C = 0.0254, WEIGHT_C = 2.2; 
	int height_1, height_2;// 
	float weight_p;
	
	float BMI;
	
	float height, weight;//���-�׺�����-kg 
	
	cout << "����������(Ӣ�ߺ�Ӣ��ֱ�����)�����أ�����: " ;
	
	cin >> height_1 >> height_2 >> weight_p;
	
	cout << "������Ϊ" << height_1 << "Ӣ��, "<< height_2 << "Ӣ��" << endl; 
	height = (height_1 * 12 + height_2) * HEIGHT_C;
	cout <<  "������Ϊ " << height << " ��" << endl;
	weight = weight_p / 2.2 ;
	cout << "�������Ϊ " << weight << " ǧ��" << endl;
	
	BMI = weight / (height * height);
	
	cout << "���BMI�ǣ�" << BMI;
	
	return 0; 
} 
