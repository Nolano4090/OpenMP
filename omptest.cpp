#include<iostream>
#include<omp.h>

using namespace std;

int main()
{
#pragma omp parallel
	{
		cout << "Test" << endl;
	}
	return 0;
	system("pause");
}

// when compile omp file, use instruction g++ -fopenmp
