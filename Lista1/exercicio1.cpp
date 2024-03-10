#include <iostream>
using namespace std;

int main (){
    int anos, meses, dias, retorno;

    cout << "Digite sua idade em anos ";
    cin >> anos;
    cout << "Digite sua idade em meses ";
    cin >> meses;
    cout << "Digite sua idade em dias ";
    cin >> dias;
    if (anos > 0 && meses > 0 && dias > 0){

        retorno = anos * 365 + dias + meses *30;
        cout << "A Sua idade em dias é " << retorno << " dias";   
    } else {
        cout << "Não foi possivél concluir a ação.";
    }


        return 0;

}