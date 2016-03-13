#include<iostream>
#include<iomanip>
using namespace std;
struct Person
{
	char  firstName[20];
	char lastName[20];
};
struct Client
{
	double money;
	Person name[20];
};
int main()
{
	Client a[20];
	int n;
	cout << "Vavedete broq na clientite - ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "First name : ";
		cin>>a[i].name[i].firstName;
		cout << "Last name :  ";
		cin >> a[i].name[i].lastName;
		cout << "Money in bank account: ";
		cin >> a[i].money;
		cout << "\n";
	}
	cout << "\n";
	cout << "\n";
	for(int i = 0; i < n; i++)
	{
		cout << "First name : "<<a[i].name[i].firstName<<endl;
		cout << "Last name :  "<< a[i].name[i].lastName<<endl;
		cout << "Money in bank account: "<< a[i].money<<endl;
		cout << "\n";
	}
	cout << "\n";
	double sum = 0;

	for (int i = 0; i < n; i++)
		sum += a[i].money;
	cout << "Sumata na smetkite na  < " << n << " > klienta e - " << sum<<endl;




	system("pause");
	return 0;
