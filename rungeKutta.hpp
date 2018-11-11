#include "function.hpp"
#include <iostream>

using namespace std;

class rungeKutta{
public:
    float calculaRungeKutta(float x0, float y0, float x, float h){
        retornaFuncao f;

        int n = (int)((x - x0)/h);

        float k1, k2, k3, k4, k5;

        float y  = y0;

        for(int i = 1; i <= n; i++){
            k1 = h*f.calculaFuncao(x0, y);
            k2 = h*f.calculaFuncao(x0 + 0.5*h, y + 0.5*k1);
            k3 = h*f.calculaFuncao(x0 + 0.5*h, y + 0.5*k2);
            k4 = h*f.calculaFuncao(x0 + 0.5*h, y + k3);

            y = y + (1.0/6.0)*(k1 + 2*k2 + 2*k3 + k4);

            x0 = x0 + h;
        }

        return y;
    }
};