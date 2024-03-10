#include <iostream>
using namespace std;

int main (){
    float quantidadeAnos, precoMaco, diasTotal, cigarroTotal, quantidadesMaco, gastoTotal;
    int cigarrosFumados, macoTotal; 

    cout << "A quantos anos voce fuma? ";
    cin >> quantidadeAnos;
    cout << "Quantos cigarros voce fuma por dia? ";
    cin >> cigarrosFumados;
    cout << "Qual o preco do seu maco favorito de cigarro? ";
    cin >> precoMaco;
    macoTotal = 20;

    if (quantidadeAnos > 0 && cigarrosFumados > 0 && precoMaco > 0) {
    diasTotal = quantidadeAnos * 365;
    cigarroTotal = diasTotal * cigarrosFumados;
    quantidadesMaco = cigarroTotal / macoTotal;
    gastoTotal = precoMaco * quantidadesMaco;
        cout << "O valor total gasto com cigarro foi de " << gastoTotal << "R$";
    } else {
        cout << "Nao foi possivel realizar a operacao";
    }
    
return 0;

}