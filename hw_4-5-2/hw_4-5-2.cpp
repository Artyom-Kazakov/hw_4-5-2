#include <iostream>
#include <string>

class Figure {
public:

	virtual void print() const = 0;
};

class Triangle : public Figure {
protected:

	int a = 0;
	int b = 0;
	int c = 0;
	int A = 0;
	int B = 0;
	int C = 0;

public:

	Triangle(int a, int b, int c, int A, int B, int C) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
	}

	void print() const override {
		std::cout << "Triange\n" << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C;
	}
};

class R_Triangle : public Triangle {
public:

	R_Triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {}
	
	void print() const override {
		std::cout << "\n\nRight triange\n" << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C;
	}
};

class Eq_Triangle : public Triangle {
public:

	Eq_Triangle(int a) : Triangle(a, a, a, 60, 60, 60) {}
	
	void print() const override {
		std::cout << "\n\nEquilateral triange\n" << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C;
	}
};

class Iso_Triangle : public Triangle {
public:

	Iso_Triangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A) {}
	
	void print() const override {
		std::cout << "\n\nIsosceles triange\n" << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C;
	}
};

class Quadrangle : public Figure {
protected:
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;

public:

	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
	}

	void print() const override {
		std::cout << "\n\nQuadrangle\n" << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << "\td = " << d << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C << "\tD = " << D;
	}
};

class Rectangle : public Quadrangle {
public:
	Rectangle(int a, int b) : Quadrangle(a, b, a, b, 90, 90, 90, 90) {}

	void print() const override {
		std::cout << "\n\nRectangle\n" << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << "\td = " << d << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C << "\tD = " << D;
	}
};

class Square : public Rectangle {
public:
	
	Square(int a) : Rectangle(a, a) {};

	void print() const override {
		std::cout << "\n\nSquare\n" << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << "\td = " << d << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C << "\tD = " << D;
	}
};

class Parallelogram : public Quadrangle {
public:

	Parallelogram(int a, int b, int A, int B) : Quadrangle (a,b,a,b,A,B,A,B) {}

	void print() const override {
		std::cout << "\n\nParallelogram\n" << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << "\td = " << d << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C << "\tD = " << D;
	}
};

class Rhombus : public Parallelogram {
public:

	Rhombus(int a, int A, int B) : Parallelogram (a,a,A,B) {}

	void print() const override {
		std::cout << "\n\nRhombus\n" << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << "\td = " << d << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C << "\tD = " << D;
	}
};
int main()
{
	Figure* tri = new Triangle(10, 20, 30, 60, 40, 100);
	tri->print();

	Figure* r_t = new R_Triangle(20, 30, 40, 50, 80);
	r_t->print();

	Figure* eq_t = new Eq_Triangle(77);
	eq_t->print();

	Figure* iso_t = new Iso_Triangle(80, 40, 60, 30);
	iso_t->print();

	Figure* quad = new Quadrangle(45, 67, 23, 76, 24, 87, 23, 56);
	quad->print();

	Figure* rect = new Rectangle(40, 70);
	rect->print();

	Figure* sqr = new Square(69);
	sqr->print();

	Figure* par = new Parallelogram(20, 60, 50, 90);
	par->print();

	Figure* rho = new Rhombus(420, 80, 100);
	rho->print();
}