#include "function.hpp"
#include <iostream>

using namespace std;

class rungeKutta{
public:
    // Aqui são os valores a serem recebidos, x0 o x em y(x0), y0 o valor inicial de y, x o valor em que deseja calcular a função, e h o passo do cálculo
    float calculaRungeKutta(float x0, float y0, float x, float h){
        // Instanciando a classe que pega a função
        Function f;

        // Cálculo da quantidade de vezes que o cálculo será repetido
        int n = ((x - x0)/h);

        // Váriáveis da fórmula de Runge-Kutta de 4ª Ordem
        float k1, k2, k3, k4;

        for(int i = 0; i < n; i++){
            // Calculando os valores dos k com base nas fórmulas de Runge-Kutta
            k1 = h*f.retornaFuncao(x0, y0);
            k2 = h*f.retornaFuncao(x0 + 0.5*h, y0 + 0.5*k1);
            k3 = h*f.retornaFuncao(x0 + 0.5*h, y0 + 0.5*k2);
            k4 = h*f.retornaFuncao(x0 + h, y0 + k3);

            // Acumulando o valor de y0, também com base na fórmula de Range-Kutta
            y0 = y0 + (1.0/6.0)*(k1 + 2*k2 + 2*k3 + k4);

            // Andando com o x0
            x0 = x0 + h;
        }

        return y0;
    }
};