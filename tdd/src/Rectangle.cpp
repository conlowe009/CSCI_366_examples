//
// Created by mwitt_cjbzle6 on 2/21/2020.
//

#include "Rectangle.h"

Rectangle::Rectangle(int xmin, int ymin, int xmax, int ymax) {
   this->xmin = xmin;
   this->ymin = ymin;
   this->xmax = xmax;
   this->ymax = ymax;

   if(xmin==ymin && xmin==ymax && xmin==xmax)
      throw RectangleException("All cordinates equal!");
}

int Rectangle::get_width(){
   return xmax - xmin;
}

int Rectangle::get_height() {
   return ymax - ymin;
}

int Rectangle::area() {
   return this->get_width() * this->get_height();
}
