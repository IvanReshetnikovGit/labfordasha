#include<math.h>

class aCalculation
{
    double b;
    public:
    double a;

     void calculation(double x, double y,double z)
    {
        b = 1-x+pow(y,2)/6+pow(z,3)/120+pow(sin(x-z),2)/(pow(y,1.23)+z);
        a = 2*cos(pow(abs(pow(x,2)-b/6),1./3))/(1+x*b+pow(sin(pow(y,3)),2))+pow(log(pow(abs((x+1)/z),1.2)),3);
    }

};