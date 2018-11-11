#include <iostream>
#include "rungeKutta.hpp"

using namespace std;

int main(){
    // Instanciando a classe que calcula o Runge-Kutta de 4ª Ordem
    rungeKutta r;

    /* Declarando as variáveis:
        x0 é o valor inicial de 0, para y(x0);
        y é o valor de y nesse y(x0)
        x é o valor em que você deseja calcular a função, y(x)
        h é o passo utilizado para a soma na equação de Runge-Kutta de 4ª Ordem
    */

    float x0 = 0, y = 0, x = 0.2, h = 0.1;
    cout << r.calculaRungeKutta(x0, y, x, h);
    return 0;
}