#include "std_lib_facilities.h" 

int main()
{
	cout << "Kérlek add meg a neved és a korod!\n";

	string first_name;
	int age;

	cin >> first_name >> age;


	cout << "Hello, Mr " << first_name << " korod: " << age << "\n";


	return 0;
}
