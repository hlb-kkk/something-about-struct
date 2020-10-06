#include <iostream>
#include <string>
#include <ctime>

using namespace std;

//设计学生结构体
struct Student
{
	string name;
	int score;
};
//设计老师结构体
struct Teacher
{
	string name;
	Student sarray[5];
};

//同通过函数给老师赋值
void assignment(Teacher tArray[], int len)
{
	string tName = "老师";
	string sName = "学生";
	string nameseed = "ABCDE";

	for (int i = 0; i < len; i++)
	{
		tArray[i].name = tName + nameseed[i];
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sarray[j].name = sName + nameseed[j];
			tArray[i].sarray[j].score = rand() % 41 + 60;

		}


	}
}

void printteacher(Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << tArray[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t姓名： " << tArray[i].sarray[j].name
				<< "分数： " << tArray[i].sarray[j].score << endl;
		}
	}
}

int main()
{

	//创建老师数组
	Teacher tArray[3];
	int len = sizeof(tArray) / sizeof(tArray[0]);

	//增添随机数种子
	srand((unsigned int)time(NULL));
	assignment(tArray, len);

	printteacher(tArray, len);





	system("pause");
	return 0;
}