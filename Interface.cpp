#include <iostream>
using namespace std;

class Shape{
protected:
	int width;
	int height;
public:
	virtual	void setWidth(int w)=0;
	virtual void setHeight(int h)=0;
	virtual int getArea()=0;
};

class Rectangle: public Shape{
public:
	void setWidth(int w){
		width = w;
	}

	void setHeight(int h){
		height = h;
	}

	int getArea(){
		return width*height;
	}
};

class Triangle: public Shape{
public:
	void setWidth(int w){
		width = w;
	}

	void setHeight(int h){
		height = h;
	}

	int getArea(){
		return (width*height)/2;
	}
};

int main(int argc, char const *argv[])
{
	Rectangle r;
	r.setWidth(10);
	r.setHeight(10);
	cout<<r.getArea()<<"\n";

	Triangle t;
	t.setWidth(10);
	t.setHeight(10);
	cout<<t.getArea()<<"\n";
	return 0;
}
