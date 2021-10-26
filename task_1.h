#include <iostream>
class Figure
{
protected:
	double _x, _y; //there are center coordinates of our figure;
public:
	virtual void getArea()
	{
		const double Pi = 3.141592;
		std::cout << "Parents function" << std::endl;
	}
	virtual void getInformationAboutFigure()
	{
		std::cout << "Parents function" << std::endl;
	}
	virtual void getPerimeter()
	{
		std::cout << "Parents function" << std::endl;
	}
	virtual ~Figure() 
	{
		std::cout << "Calling ~Figure" << std::endl;
		delete &_x;
		delete &_y;
	}
};
class Ellipse : public Figure
{
protected:
	double _a, _b;
public:
	virtual void getArea()
	{
		const double Pi = 3.141592;
		std::cout << "The area of our ellipse is " << Pi * _a * _b << std::endl;
	}
	virtual void getInformationAboutFigure()
	{
		std::cout << "Coordinates of our ellipse: (" << _x << ";" << _y << ") " << "a = " << _a << " " << "b = " << _b << std::endl;
	}
	virtual void getPerimeter()
	{
		const double Pi = 3.141592;
		std::cout << "The perimetr of our ellipse is " << 4 * ((Pi * _a * _b + (_a - _b) * (_a - _b)) / (_a + _b)) << std::endl;
	}
	void setEllipse(double x, double y, double a, double b)
	{
		_x = x;
		_y = y;
		_a = a;
		_b = b;
	}
	double getXOfEllipse() const
	{
		return _x;
	}
	double getYOfEllipse() const
	{
		return _y;
	}
	double getAOfEllipse() const
	{
		return _a;
	}
	double getBOfEllipse() const
	{
		return _b;
	}
	virtual ~Ellipse() 
	{
		std::cout << "Calling ~Ellipse" << std::endl;
		delete& _x;
		delete& _y;
		delete& _a;
		delete& _b;
	}
};
class Rectangle : public Figure
{
protected:
	double _a, _b;
public:
	virtual void getInformationAboutFigure()
	{
		std::cout << "Coordinates of our rectangle: (" << _x << ";" << _y << ") " << "a = " << _a << " " << "b = " << _b << std::endl;
	}
	virtual void getArea()
	{
		const double Pi = 3.141592;
		std::cout << "The area of our rectangle is " << _a * _b << std::endl;
	}
	virtual void getPerimeter()
	{
		std::cout << "The perimetr of our rectangle is " << 2 * (_a + _b) << std::endl;
	}
	void setRectangle(double x, double y, double a, double b)
	{
		_x = x;
		_y = y;
		_a = a;
		_b = b;
	}
	double getXORectangle() const
	{
		return _x;
	}
	double getYOfRectangle() const
	{
		return _y;
	}
	double getAOfRectangle() const
	{
		return _a;
	}
	double getBOfRectangle() const
	{
		return _b;
	}
	 virtual ~Rectangle()
	{
		std::cout << "Calling ~Rectangle" << std::endl;
		delete& _x;
		delete& _y;
		delete& _a;
		delete& _b;
	}
};
class Triangle : public Figure
{
protected:
	double _a, _b, _c;
public:
	virtual void getInformationAboutFigure()
	{
		std::cout << "Coordinates of our triangle: (" << _x << ";" << _y << ") " << "a = " << _a << " " << "b = " << _b << "c = " << _c << std::endl;
	}
	virtual void getArea()
	{
		const double Pi = 3.141592;
		double S;
		S = sqrt((_a + _b + _c) * (-_a + _b + _c) * (_a - _b + _c) * (_a + _b - _c) / 16);
		std::cout << "The area of our triangle is " << S << std::endl;
	}
	virtual void getPerimeter()
	{
		std::cout << "The perimetr of our triangle is " << _a + _b + _c << std::endl;
	}
	void setTriangle(double x, double y, double a, double b, double c)
	{
		_x = x;
		_y = y;
		_a = a;
		_b = b;
		_c = c;
	}
	double getXOfTriangle() const
	{
		return _x;
	}
	double getYOfTriangle() const
	{
		return _y;
	}
	double getAOfTriangle() const
	{
		return _a;
	}
	double getBOfTriangle() const
	{
		return _b;
	}
	double getCOfTriangle() const
	{
		return _c;
	}
	virtual ~Triangle()
	{
		std::cout << "Calling ~Triangle" << std::endl;
		delete& _x;
		delete& _y;
		delete& _a;
		delete& _b;
		delete& _c;
	}
};
class Circle : public Ellipse
{
public:
	void setCircle(double x, double y, double a)
	{
		_x = x;
		_y = y;
		_a = a;
		_b = a;
	}
	double getXOfCircle() const
	{
		return _x;
	}
	double getYOfCircle() const
	{
		return _y;
	}
	double getAOfCircle() const
	{
		return _a;
	}
	virtual ~Circle()
	{
		std::cout << "Calling ~Circle" << std::endl;
		delete& _x;
		delete& _y;
		delete& _a;
		delete& _b;
	}
};
class Square : public Rectangle
{
public:
	void setSquare(double x, double y, double a)
	{
		_x = x;
		_y = y;
		_a = a;
		_b = a;
	}
	double getXOfSquare() const
	{
		return _x;
	}
	double getYOfSquare() const
	{
		return _y;
	}
	double getAOfSquare() const
	{
		return _a;
	}
	virtual ~Square()
	{
		std::cout << "Calling ~Square" << std::endl;
		delete& _x;
		delete& _y;
		delete& _a;
		delete& _b;
	}
};
