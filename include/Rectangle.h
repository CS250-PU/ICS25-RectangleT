//****************************************************************************** 
// File name:	 Rectangle.cpp
// Author:		 CS, Pacific University
// Date:			 
// Class:			 CS 250
// Assignment: Rectangle Lab
// Purpose:		 Declares each of the function prototypes associated with 
//						 class Rectangle
//******************************************************************************

#include <fstream>

class Rectangle {
public:
  Rectangle (double = 1.0, double = 1.0);
  void setLength (double length);
  void setWidth (double width);
  double getLength () const;
  double getWidth () const;
  double getArea () const;
  double getPerimeter () const;
  bool read (std::istream &rcInStream);
  void write (std::ostream &rcOutStream) const;
private:
  double mLength;
  double mWidth;
};