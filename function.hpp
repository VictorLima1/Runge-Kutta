#include <cmath>

// Função responsável por retornar a f(x) que a função de Runge-Kutta deve utilizar
class Function{
public:
    float retornaFuncao(float x, float y){
        // O return deve ser alterado para a função que se deseja calcular o f(x) no x desejado
        return(-0.5*y + 10 + sin(2*x)); 
    }
};
