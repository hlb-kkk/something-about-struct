#include <iostream>
#include <ctime>
#include <string>

using namespace std;

struct Student
{
	string name;
	int age;
	int score;
}s3;//第三种方法


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
		cout << "姓名： " << arr[i].name
			 << "\t年龄： " << arr[i].age
			 << "\t分数:  " << arr[i].score << endl;
	} 
}

void printarr1(Student* p, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "\n姓名： " << p->name
			<< "\n年龄： " << p->age
			<< "\n分数： " << p->score << endl;
	}
}

int main()
{
	
	struct Student s1;//第一种方法
	s1.age = 23;
	s1.name = "huluobo";
	s1.score = 93;

	cout << "名字： " << s1.name
		<< "\n年龄： " << s1.age
		<< "\n分数： " << s1.score << endl;
	cout << endl;

	struct Student s2 = { "huzi",25,91 };//第二种方法,在第二种方法的时候，一定要按照定义的顺序赋值

	cout << "名字： " << s2.name
		<< "\n年龄： " << s2.age
		<< "\n分数： " << s2.score << endl;
	cout << endl;

	s3.name = "erhu";
	s3.age = 35;
	s3.score = 87;

	cout << "名字： " << s3.name
		<< "\n年龄： " << s3.age
		<< "\n分数： " << s3.score << endl;
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
	t1.name = "仗义";
	t1.age = 56;

	t1.s4.age = 33;
	t1.s4.name = "huyouqian";
	t1.s4.score = 99;


	cout << "\n老师姓名： " << t1.name
		<< "\n老师年龄： " << t1.age
		<< "\n老师的学生信息： "
		<< "\n\t姓名： " << t1.s4.name
		<< "\n\t年龄： " << t1.s4.age
		<< "\n\t分数： " << t1.s4.score << endl;
















	system("pause");
	return 0;
}