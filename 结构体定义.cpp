#include <iostream>
#include <ctime>
#include <string>

using namespace std;

struct Student
{
	string name;
	int age;
	int score;
}s3;//�����ַ���


struct Teacher
{
	string name;
	int age;
	struct Student s4;
};

void printarr( Student arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������ " << arr[i].name
			 << "\t���䣺 " << arr[i].age
			 << "\t����:  " << arr[i].score << endl;
	} 
}

void printarr1(Student* p, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "\n������ " << p->name
			<< "\n���䣺 " << p->age
			<< "\n������ " << p->score << endl;
	}
}

int main()
{
	
	struct Student s1;//��һ�ַ���
	s1.age = 23;
	s1.name = "huluobo";
	s1.score = 93;

	cout << "���֣� " << s1.name
		<< "\n���䣺 " << s1.age
		<< "\n������ " << s1.score << endl;
	cout << endl;

	struct Student s2 = { "huzi",25,91 };//�ڶ��ַ���,�ڵڶ��ַ�����ʱ��һ��Ҫ���ն����˳��ֵ

	cout << "���֣� " << s2.name
		<< "\n���䣺 " << s2.age
		<< "\n������ " << s2.score << endl;
	cout << endl;

	s3.name = "erhu";
	s3.age = 35;
	s3.score = 87;

	cout << "���֣� " << s3.name
		<< "\n���䣺 " << s3.age
		<< "\n������ " << s3.score << endl;
	cout << endl;

	struct Student arr[3] =
	{
		{"zhangsan", 45,84},
		{"lisi",34,73},
		{"zhaowu",26,94}
	
	};
	int len = sizeof(arr) / sizeof(arr[0]);
	printarr(arr, len);

	printarr1(&arr[0], len);

	cout << endl;

	Teacher t1;
	t1.name = "����";
	t1.age = 56;

	t1.s4.age = 33;
	t1.s4.name = "huyouqian";
	t1.s4.score = 99;


	cout << "\n��ʦ������ " << t1.name
		<< "\n��ʦ���䣺 " << t1.age
		<< "\n��ʦ��ѧ����Ϣ�� "
		<< "\n\t������ " << t1.s4.name
		<< "\n\t���䣺 " << t1.s4.age
		<< "\n\t������ " << t1.s4.score << endl;
















	system("pause");
	return 0;
}