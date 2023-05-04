#include <iostream>
using namespace std;
template<typename T>
class Account
{
	T id;
public:
	Account() = default;
	Account(T _id):id(_id) {};
	T getId()
	{
		return id;
	}
};
int main()
{
	Account<int>acc1(2545444);
	Account<string>acc2("2222222");
	cout << acc1.getId() << endl;
	cout << acc2.getId() << endl;
}
