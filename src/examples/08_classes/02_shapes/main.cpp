//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"
using std::vector; using std::unique_ptr; using std::make_unique;
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/

int main() 
{
	//Line line;
	//line.draw();

	//Circle circle;
	//circle.draw();

	//Shape* line = new Line();
	//shape->draw();

	//shape = new Circle();
	//shape->draw();
	//delete shape;
	/*
	vector<Shape> shapes;
	shapes.pushback(new Line());
	shapes.pushback(new Circle());
	for(auto shape: shapes)
	{
		shape->draw();
	}
	for(auto shape: shapes)
	{
		delete shape;
	}
	*/
	vector<unique_ptr<Shape>> shapes;
	shapes.push_back(make_unique<Line>());
	shapes.push_back(make_unique<Circle>());

	for(auto &shape:shapes)
	{
		shape->draw();
	}


	return 0;
}