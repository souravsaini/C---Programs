#include <iostream> 
using namespace std;

class Complex{
private:
	float real, img;
public:
	Complex(){}
	Complex(float real, float img){
		this->real = real;
		this->img = img;
	}

	Complex operator +(Complex c2){
		Complex temp;
		temp.real = real + c2.real;
		temp.img = img + c2.img;
		return temp;
	}

	void display(){
		if(img>0)
			cout<<real<<" + "<<img<<"i"<<"\n";
		else
			cout<<real<<" "<<img<<"\n";
	}
};

int main(int argc, char const *argv[])
{
	Complex c1(10.5f, 20.4f);
	Complex c2(4.5f, 22.5f);
	Complex c3;
	c3 = c1 + c2; //call to operator function
	c3.display();

	return 0;
}