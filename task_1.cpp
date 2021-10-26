#include "task_1.h"
int main()
{
	std::cout << "Let's check circle" << std::endl;
	Circle circle;
	circle.setCircle(0, 0, 1);
	Figure& figure1 = circle;
	figure1.getInformationAboutFigure();
	figure1.getArea();
	figure1.getPerimeter();
	std::cout << "Let's check square" << std::endl;
	Square square;
	square.setSquare(0, 0, 2);
	Figure& figure2 = square;
	figure2.getInformationAboutFigure();
	figure2.getArea();
	figure2.getPerimeter();
	std::cout << "Let's check triangle" << std::endl;
	Triangle triangle;
	triangle.setTriangle(0, 0, 1, 1, 1);
	Figure& figure3 = triangle;
	figure3.getInformationAboutFigure();
	figure3.getArea();
	figure3.getPerimeter();
	std::cout << "Let's check ellipse" << std::endl;
	Ellipse ellipse;
	ellipse.setEllipse(0, 0, 1, 2);
	Figure& figure4 = ellipse;
	figure4.getInformationAboutFigure();
	figure4.getArea();
	figure4.getPerimeter();
	std::cout << "Let's check rectangle" << std::endl;
	Rectangle rectangle;
	rectangle.setRectangle(0, 0, 1, 2);
	Figure& figure5 = rectangle;
	figure5.getInformationAboutFigure();
	figure5.getArea();
	figure5.getPerimeter();
	delete& figure5;
}