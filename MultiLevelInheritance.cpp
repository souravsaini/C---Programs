#include<iostream>
using namespace std;
class Student{
	private:
		int rollno;
		char name[20];
	public:
		void input(){
		cout<<"Enter rollno";
		cin>>rollno;
		cout<<"Enter name";
		cin>>name;
	}	
	   void print(){
	   	cout<<"Rollno is : "<<rollno;
        cout<<"Name : "<<name;
	   }
};
class Teacher : protected Student{
	private:
		string teacher_name;
	public:
		void input(){
			Student::input();
			cout<<"Enter Teacher name";
			cin>>teacher_name;
		}
		void print(){
			Student::print();
			cout<<"Class Teacher : "<<teacher_name;
		}
};
class Marks : protected Teacher{
    private:
    	int m1;
    	int m2;
    	int m3;
    public:
        void input(){
        	Teacher::input();
        	cout<<"Enter Marks of Three Subjects";
        	cin>>m1>>m2>>m3;
        }	
        void print(){
        	Teacher::print();
        	cout<<"M1 marks : "<<m1;
        	cout<<"M2 marks : "<<m2;
        	cout<<"M3 marks : "<<m3;
            cout<<"Average is : "<<(m1+m2+m3)/3;
        }
};

int main(){
	Marks m;
	m.input();
	m.print();
	return 0;
}