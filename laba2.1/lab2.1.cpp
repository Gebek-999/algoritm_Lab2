/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;
double x,y,s;
int main(){
    ofstream prout("text2.txt");
    ifstream prin("text1.txt");
    prin >> x >> y;
    prout << x*y <<endl;
    prin.close();
    prout.close();
}