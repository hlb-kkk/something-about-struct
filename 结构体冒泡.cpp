#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include<cstdlib>


using namespace std;

struct Hero 
{
	string name;
	int age;
	string sexual;

};

void Aprint(Hero arr1[], int len)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 - i - len; j++)
		{
			if (arr1[j].age < arr1[j + 1].age)
			{
				int temp = arr1[j].age;
				arr1[j].age = arr1[j + 1].age;
				arr1[j + 1].age = temp;
			}
		}
	}
	
	for (int u = 0; u < 5; u++)
	{
		cout << "{ " << arr1[u].name << "�� " << arr1[u].age << "�� " << arr1[u].sexual << "}" << endl;

	}
}


int main()
{
	struct Hero arr1[5]
	{
		{ "����",23,"��" },
		{ "����",22,"��" },
		{ "�ŷ�",20,"��" },
		{ "����",21,"��" },
		{ "����",19,"Ů" }
	};

	int len = sizeof(arr1) / sizeof(arr1[0]);
	//struct Hero h1 = { "����",23,"��" };
	//struct Hero h2 = { "����",22,"��" };
	//struct Hero h3 = { "�ŷ�",20,"��" };
	//struct Hero h4 = { "����",21,"��" };
	//struct Hero h5 = { "����",19,"Ů" };

	Aprint(arr1, len);

 





	system("pause");
	return 0;
}