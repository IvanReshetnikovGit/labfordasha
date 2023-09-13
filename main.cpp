#include<iostream>
#include<vector>

#include "aCalcultion.h"

using namespace std;

int main()
{
    int choice = 12;
    double x =0.48*12;
    double y = 0.47*12;
    double z = 1.32*12;

    aCalculation firsta;
    firsta.calculation(x,y,z);
    cout<<"a = "<<firsta.a<<endl;
    vector<aCalculation> massive;

    int p=0;
    double i=-1;
    aCalculation massiveDod;
    while(i<1)
    {
        massiveDod.calculation(i,y,z);
        massive.push_back(massiveDod);
        cout<<"Element №"<<p+1<<" "<<massive[p].a<<endl;
        p++; i=i+0.2;
    }
    
    return 0;
}

