#include <iostream>

using namespace std;

void func_new_delete(void)
{
	int *arr = new int[10];
	int i = 0;
	for(i = 0; i < 10; ++i){
		arr[i] = i;
	}

	for(i = 0; i < 10; ++i){
		cout << "new arr " << i << " "<< arr[i] << endl;
	}

	delete []arr;
}

void func_new_delete(int n)
{
	int *arr = new int[5]{1,2,3,4,5};

	int i = 0;
	for(i; i < 5; ++i){
		cout << arr[i] << endl;
	}

	delete []arr;
	//delete arr;
}

int main(void)
{
	//func_new_delete();
	func_new_delete(1);
	return 0;
}
