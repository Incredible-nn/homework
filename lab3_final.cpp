#include <iostream>
using namespace std;
class keyboard
{
private:
	int kk;
	int mk;
public:
	keyboard(): kk(104), mk(0){}
	keyboard(int a, int b): kk(a),kk(b){}
	keyboard(int c): kk(c)
	{
		mk= c-104;
	}
	void set(){
		cout<<"vvedite kol-vo klavish: ";
		cin>>kk;
		cout<<"vvedite kol-vo makro-klavish: ";
		cin>>mk;
	}
	void vid(){
		cout<<"kol-vo klavish "<<kk<<endl;
		cout<<"kol-vo makro-klavish "<<mk;
	}
	~keyboard();
	
};

int main()
{
keyboard ryos;
cout<<"ryos "<<endl;
ryos.vid();
keyboard g6(110,8);
cout<<"g6 "<<endl;
g6.vid();
keyboard bwu(120);
cout<<"bwu "<<endl;
bwu.vid();
//ryos.set();


	return 0;
}