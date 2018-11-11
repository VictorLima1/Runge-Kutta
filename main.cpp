#include <iostream>
#include "rungeKutta.hpp"

using namespace std;

int main(){
    rungeKutta r;
    float x0 = 0, y = 1, x = 2, h = 0.2;
    cout << r.calculaRungeKutta(x0, y, x, h);
    return 0;
}