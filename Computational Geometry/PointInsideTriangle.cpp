#include <bits/stdc++.h>
using namespace std;
 

float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
   return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}
 
bool isInside(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y)
{  
    float area1 = area( x1, y1, x2, y2, x3, y3);
    float A1 = area( x, y, x1, y1, x2, y2);
    float A2 = area( x, y, x1, y1, x3, y3);
    float A3 = area( x, y, x3, y3, x2, y2);

    return( area1 == A1+A2+A3);
}
 
int main()
{
  
   isInside(0, 0, 20, 0, 10, 30, 10, 15)?cout<<"True":cout<<"False";
   
}