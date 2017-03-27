#include <iostream>
using namespace std;
class keypad;
class keyboard
{
private:
	int kk;
	int mk;
public:
	keyboard(): kk(104), mk(0){}
	keyboard(int a, int b, int d): kk(a),kk(b){}
	keyboard(int c, int dd): kk(c)
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
	friend keypad;
	~keyboard();
	};
	class keypad{
	public:
		void makrokey(keyboard &, int);
		void getChange(keyboard);
	}
	void keypad::makrokey(keyboard &obj, int newMacro){
		obj.mk = mk+newMacro;
	}
	void keypad::getChange(keyboard obj){
		cout<<"vsego makro-klavish"<<obj.mk<<endl;
	}

int main()
{
keyboard ryos(110);
keyboard bwu(120, 5);
cout<<"ryos "<<endl;
ryos.vid();
cout<<"bwu "<<endl;
bwu.vid();
keypad g100;
g100.makrokey(ryos, 20);
g100.makrokey(bwu,15);
cout<<"itogo"<<endl;
g100.getChange(ryos);
g100.getChange(bwu);
cout<<"itogo2"<endl;
ryos.vid();
bwu.vid();
	return 0;
}