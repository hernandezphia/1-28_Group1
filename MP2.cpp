//This program calculates certain values of a triangle based on given sides. Measurements shall be user-input.
#include <iostream>
#include <cmath>
#include <conio.h>
#define PI 3.14159265
using namespace std;

double angle(double a, double b, double c)
{
    double theta = acos((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b))*180/PI;
    return theta;
}

int main()
{
    double a,b,c;
    double f,s,t,p;
    
    //This part lets you input the 3 sides for your triangle.
    cout << "Enter 3 sides: ";
    cin >> a >> b >> c;
    
    //INPUT AND CALCULATING AREA
    if(a + b > c && b + c > a && c + a > b)
    {
        f = angle(b,c,a);
        s = angle(c,a,b);
        t = 180-f-s;
        
        //This part declares the resulting Interior Angles of Angles A, B, and C from input sides.
        cout << "\nA. Interior Angles" << endl;
        cout << "     Angle A: " << f << endl;
        cout << "     Angle B: " << s << endl;
        cout << "     Angle C: " << t << endl;
        
        //TRIANGLE CLASSIFICATION PART. This part declares if the triangle is Equilateral, Scalene, or Isosceles.
        if(a == b && a == c && b == c)
            cout << "\nB. Triangle is an = Equilateral Triangle" << endl;
        else if(a != b && a != c && b != c)
            cout << "\nB. Triangle is a = Scalene Triangle" << endl;
        else
            cout << "\nB. Triangle is an = Isosceles Triangle" << endl;
        
        //This part calculates the Area and Perimeter of the triangle.
        p=.5 * (a + b + c);
        
        cout << "\nC. Area is = " << sqrt(p*(p-a)*(p-b)*(p-c)) << endl;
        cout << "   Perimeter is = " << a+b+c << endl;
        
        //TRIANGLE RECOGNITION PART. This part declares if the triangle is Acute, Right, or Obtuse.
        if(f > 0 && f < 90 && s > 0 && t < 90 && t > 0 && t < 90)
            cout << "\nD. Acute Triangle!" << endl;
        else if(a * a + b * b == c * c || b * b + c * c ==a*a || c*c+a*a==b*b)
            cout << "\nD. Right Triangle!" << endl;
        else if(f > 90 || s > 90 || t > 90)
            cout << "\nD. Obtuse Triangle!" << endl;
        
        //This part calculates the Apothem and Circumcenter of the triangle.
        cout << "\nE. Length of Apothem is = " <<  2 * sqrt(p*(p-a)*(p-b)*(p-c)) / (a+b+c) << endl;
        cout << "   Circumcenter is = " << (a*b*c) / sqrt(((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c))) << endl;
    }
    
    //If all conditions are not met, the program then outputs that it is not a triangle.
    else
        cout << "This is not a triangle!";
    
    //This section concludes the program.
    cout << endl << endl;
    _getch();
    return 0;
}

