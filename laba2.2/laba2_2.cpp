/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;
double x,y;
string s;

float gk(float x){
    float y;
        if  (x>=-10 && x<=-6) y=sqrt(4-pow((x+8),2))-2;
            else if (x>-6 && x<=2) y=0.5*x+1;
            else if (x>2 && x<=6) y = 0;
        else y = pow((x-6),2);
    return y;
}

int main(){
    ofstream prout("text.txt");
    for (x=-10; x<=8; x++)
    {
     y = gk(x);
     prout << "x=" << x << "\ty=" << y <<endl;   
    }
    prout.close();
    ifstream prin("text.txt");
    while (getline(prin,s)){
        cout<< s<<"\n";
    }
    prin.close();
    return 0;
}