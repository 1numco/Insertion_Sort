#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;
const int max = 1000;

void sort_des(vector<int> &vec)
{
	int temp, j;
	for (int i = 1; i < vec.size(); i++)
	{
		temp = vec[i];
		j = i;
		while (j > 0 && vec[j - 1] < temp)
		{
			vec[j] = vec[j - 1];
			j -= 1;
		}
		vec[j] = temp;
	}
}
void sort_as(vector<int> &vec)
{
	int temp, j;
	for (int i = 1; i < vec.size(); i++)
	{
		temp = vec[i];
		j = i;
		while (j > 0 && vec[j - 1] > temp)
		{
			vec[j] = vec[j - 1];
			j -= 1;
		}
		vec[j] = temp;
	}
}
int main()
{
	int n = 0;
	cout << "Enter size of array" << endl;
	cin >> n;
	vector<int> vec(n);
	srand(time(NULL));

	for (int i = 0; i < vec.size(); i++)
		vec[i] = rand() % max;
	short int a = 0;
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	cout << endl;
	cout << "Choose how to sort: ascending or descending(enter 1 or 2 respectively)" << endl;
	cin >> a;
	switch (a)
	{
	case 1:sort_as(vec); break;
	case 2:sort_des(vec); break;
	default:
		break;
	}
	cout << "The array is sorted: ";
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	system("pause");
	return 0;
}