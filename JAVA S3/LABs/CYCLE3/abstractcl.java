import java.util.*;
abstract class Shape
{
	abstract void numberofsides();
}
class Rectangle extends Shape
{
	void numberofsides()
	{
		System.out.println("number of sides of a rectangle is 4");
	}
}
class Triangle extends Shape
{
	void numberofsides()
	{
		System.out.println("number of sides of a rectangle is 3");
	}
}
class Hexagon extends Shape
{
	void numberofsides()
	{
		System.out.println("number of sides of a rectangle is 6");
	}
}

class abdemo
{
	public static void main(String args[])
	{
		Rectangle r=new Rectangle();
		Triangle t=new Triangle();
		Hexagon h=new Hexagon();
		System.out.println("rectangle");
		r.numberofsides();
		System.out.println("triangle");
		t.numberofsides();
		System.out.println("hexagon");
		h.numberofsides();
	}
}
		
		
