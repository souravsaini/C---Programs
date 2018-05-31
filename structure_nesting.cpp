#include <iostream>
using namespace std;

struct date{
		int day;
		int month;
		int year;
	};
struct employee{
		int emp_no;
		string emp_name;
		double salary;
		date dob;   //nesting of structure
};

int main(int argc, char const *argv[])
{
	void display(employee); 
	employee e1;
	e1.emp_no = 100;
	e1.emp_name = "Daljit";
	e1.salary = 20000.50;
	e1.dob.day = 28;
	e1.dob.month = 04;
	e1.dob.year = 1996;
	cout<<sizeof(e1);

	display(e1);  //structure pass to a function
	
	return 0;
}

void display(employee e1){
	cout<<e1.emp_no<<"\n";
	cout<<e1.emp_name<<"\n";
	cout<<e1.salary<<"\n";
	cout<<e1.dob.day<<"-";
	cout<<e1.dob.month<<"-";
	cout<<e1.dob.year<<"\n";
}