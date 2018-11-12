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
    float x0, y0, x, h;
    
    cout << "Digite o valor de x0 (de y(x0)): ";
    cin >> x0;
    cout << "Digite o valor de y(x0): " ;
    cin >> y0;
    cout << "Digite o valor em que deseja calcular a função: ";
    cin >> x;
    cout << "Digite o intervalo: ";
    cin >> h;
    cout << "Valor aproximado para " << ((x - x0) / h) <<" passos: " << r.calculaRungeKutta(x0, y0, x, h) << endl;;
    return 0;
}