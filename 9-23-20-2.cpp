#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void DisplayMenu();
float Area(float Radius);
float Area(float weight ,float height);
float Area(double based ,double high);
int main ()
{
	char Choice;
	bool Flag = true;
	do {
		DisplayMenu();
		cin >> Choice ;
		if (Choice == '1'){
			float Radius;
			cout << "\nEnter radiuse :";
			cin >> Radius;
			cout << "Area of Circle = "<< fixed;
			cout << setprecision(2) << Area(Radius) << endl;
		}
		else if (Choice == '2'){
		float weight,height;
			cout << "\nEnter Length and widht:";
			cin >> weight >> height ;
			cout << "Area of Rectangle = "<< fixed;
			cout << setprecision(2) << Area(weight,height) << endl;
		}
		else if (Choice == '3'){
		double based,high;
			cout << "\nEnter  high and based:";
			cin >> based >> high ;
			cout << "Area of Triangle = "<< fixed;
			cout << setprecision(2) << Area(based,high) << endl;
		}
		else if (Choice == '4') Flag = false;
		else{
			cout << "\nYou choose out of range is ";
			cout << "not process.\n"<< endl;
		}
	}while (Flag);
	cout << "\n...Exit Program...\n";
	return 0 ;
}
float Area(float Radius){
	return(3.14159F * Radius * Radius);
}
float Area(float weight ,const float height){
	return (weight * height);
}
float Area(double based ,double high){
	return based * high * 0.5;
		
}

void DisplayMenu(){
	cout << endl;
	cout << "Program Calate Area "<< endl;
	cout << " 1. Clrcle " << endl;
	cout << " 2. Rectangle " << endl;
	cout << " 3. Triangle " << endl;
	cout << " 4. Exit " << endl;
	cout << "Enter your choose number :";
}
