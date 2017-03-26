#include <iostream>
using namespace std;
class keyboard
{
private:
	int kk;
	int mk;
	static int ex;
public:
	/*keyboard(): kk(104), mk(0){}
	keyboard(int a, int b): kk(a),mk(b){}
	keyboard(int c): kk(c)
	{
		mk= c-104;
	}*/
	void set(int kk, int mk){
		this->kk= kk;
		this->mk= mk;
	}
	void get(){
		cout<<"kol-vo klavish "<<kk<<endl;
		cout<<"kol-vo makro-klavish "<<mk<<endl;
	}
	static void vid_ex();
	//~keyboard();
	
};
/*int keyboard::ex=0;
void keyboard::vid_ex(){
	cout<<"primer static "<<ex<<endl;
}*/
int main()
{
keyboard ryos;
cout<<"ryos "<<endl;
ryos.set(107,3);
ryos.get();
/*keyboard g6(110,8);
cout<<"g6 "<<endl;
g6.get();
keyboard bwu(120);
cout<<"bwu "<<endl;
bwu.get();
keyboard::vid_ex();
ryos.set();*/


	return 0;
}
