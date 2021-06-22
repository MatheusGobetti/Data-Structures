#include <iostream>
#include <chrono>
#include <string>

using namespace std;

#include "Recursao.cpp"

int main() {

    //Testes

    Recursao rec;

    cout << rec.contagemCrescente(14) << endl;

    cout << rec.fatorial(5) << endl;

    cout << rec.contagemDecrescente(20) << endl;

    cout << rec.intervaloCrescente(6, 12) << endl;

    cout << rec.intervaloDecrescente(12, 6) << endl;

    cout << rec.paresCrescente(26) << endl;

}

