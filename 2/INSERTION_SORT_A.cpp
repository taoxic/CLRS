#include<iostream>

void sort(int arr[],int length);
void show_arr(int arr[],int length);

int main(){

	using namespace std;

	int arr[10] = {24,45,16,9,56,78,15,62,47,2};

	sort(arr, 10);
	show_arr(arr, 10);
	
	return 0;
}

void sort(int arr[], int length){
	using namespace std;

	int temp;
	int i, j;

	for (j = 1; j < length; j++){
		temp = arr[j];
		i = j - 1;
		while (i >= 0&&arr[i]>temp){
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i + 1] = temp;

		cout << arr[i+1] << " " << i << "##";
		show_arr(arr, 10);
	}
}

void show_arr(int arr[], int length){
	using namespace std;

	for (int i = 0; i < length;i++){
		cout << arr[i] << " ";
	}
	cout <<  " \n";
}