#include <iostream>
#include <string>
#include <ctime>

using namespace std;

//���ѧ���ṹ��
struct Student
{
	string name;
	int score;
};
//�����ʦ�ṹ��
struct Teacher
{
	string name;
	Student sarray[5];
};

//ͬͨ����������ʦ��ֵ
void assignment(Teacher tArray[], int len)
{
	string tName = "��ʦ";
	string sName = "ѧ��";
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
			cout << "\t������ " << tArray[i].sarray[j].name
				<< "������ " << tArray[i].sarray[j].score << endl;
		}
	}
}

int main()
{

	//������ʦ����
	Teacher tArray[3];
	int len = sizeof(tArray) / sizeof(tArray[0]);

	//�������������
	srand((unsigned int)time(NULL));
	assignment(tArray, len);

	printteacher(tArray, len);





	system("pause");
	return 0;
}