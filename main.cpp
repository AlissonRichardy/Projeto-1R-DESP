#include <iostream>
#include <cstdlib>
#define resurce.rc
#include <conio.h>

using namespace std;

    //CONSTANTES
    const float DPVAT_CARRO = 45.72;
    const float DPVAT_MOTO = 185.50;

    const float P_R_CARRO = 465.00;
    const float P_R_MOTO = 445.00;
    const float por_ipva_carro = 0.04;
    const float por_ipva_moto = 0.02;


    //VARIÁVEIS
    float registro;
    float dpvat;
    float por = 0.0;

    float ipvaT = 0;
    float ipvaP = 0;
    float dp = 0.;
    int mes = 0;
    float total = 0;
    float totalP = 0;
    int x = 15;
    int opcao;

int main(){

    do{
    system("cls");
    cout << "_______________PRIMEIRO REGISTRO 1.0.1_______________\n";
    cout << "______________________CALCULO________________________\n\n";
    cout << "  [1]= MOTO \t [2]= CARRO \t [3]= CAMINHONETE \n";



        do{
            cout << "\t Informe a opcao desejada: ";
            cin >> opcao;
        switch(opcao){
            case 1:
                registro = P_R_MOTO;
                dpvat = DPVAT_MOTO;
                por = por_ipva_moto;
                cout << "\t\tMOTO\n";
                break;
            case 2:
                registro = P_R_CARRO;
                dpvat = DPVAT_CARRO;
                por = por_ipva_carro;
                cout << "\t\tCARRO\n";
                break;
            case 3:
                registro = P_R_MOTO;
                dpvat = DPVAT_MOTO;
                por = por_ipva_moto;
                cout << "\t\tCAMINHONETE 2 LUGARES\n";
                break;


            default:
                cout << "\tOPCAO: " <<opcao << " INVALIDA (NAO ENCONTRADA)\n";

        }
        }while(opcao > 3 || opcao < 1);

    cout << "VALOR DA NOTA >> ";
    cin >> ipvaT;
    cout << "MeS DA NOTA>> ";
    cin >> mes;
    switch (mes){

        case 1:
            mes = 12;
            break;
        case 2:
            mes = 11;
            break;
        case 3:
            mes = 10;
            break;
        case 4:
            mes = 9;
            break;
        case 5:
            mes = 8;
            break;
        case 6:
            mes = 7;
            break;
        case 7:
            mes = 6;
            break;
        case 8:
            mes = 5;
            break;
        case 9:
            mes = 4;
            break;
        case 10:
            mes = 3;
            break;
        case 11:
            mes = 2;
            break;
        case 12:
            mes = 1;
            break;
        default:
            cout << "DATA INVALIDA ! ! !" << endl;

}
    //CALCULOS
    ipvaT = ipvaT*por/12 * mes;
    dp = (dpvat/12) * mes;
    total = ipvaT + dp + registro;
    ipvaP = ipvaT / 3;
    totalP = ipvaP + dp + registro;


    cout <<"IPVA: \t\t  >> " << ipvaT << endl;
    cout <<"DPVAT: \t\t  >> " << dp << endl;
    cout <<"P_1 R: \t\t  >> " << registro << endl;
    cout <<"IPVA 3X: \t  >> " << ipvaP <<"\n" << endl;
    cout <<"PARCELADO: \t  >> " << totalP <<"\n" << endl;

    cout <<"TOTAL: \t  >> " << total <<"\n\n" << endl;

    system("pause");


}while(x == 15); // FIM  DO WHILE

return 0;
}
