#include <iostream>
using namespace std;
class keyboard
{
private:
	int kk;
	int mk;
public:
	void set(){
		cout<<"vvedite kol-vo klavish: ";
		cin>>kk;
		cout<<"vvedite kol-vo makro-klavish: ";
		cin>>mk;
	}
	//keyboard();
	//~keyboard();
	
};

int main()
{
keyboard ryos;
ryos.set();


	return 0;
}

