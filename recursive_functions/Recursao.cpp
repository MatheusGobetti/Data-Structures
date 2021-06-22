#include "Recursao.h"

string Recursao::contagemCrescente(int p) {
    // Receba um valor N e retorne os valores de 1 até N em ordem crescente;
    // No formato:
    // -4-3-2-1-
    // Seu código aqui
    string ret;
    if (p == 0)
        return "-";
    else
        ret = contagemCrescente(p-1);
    ret = ret + to_string(p) + "-";
    return ret;
}

int Recursao::fatorial(int p) {
    // Receba um valor N e efetue o cálculo de seu fatorial;
    // Seu código aqui
    int f = 1;
    for (int i = 1 ; i <= p ; i++) {
        f = f * i;
    }
    return f;
}

string Recursao::contagemDecrescente(int p) {
    // Receba um valor N e retorne os valores de N até 1 (decrescente);
    // No formato:
    // -4-3-2-1-
    // Seu código aqui
    string ret;
    
    if(p == 0) {
        return "-";
    } else {
        cout << "-" << p;
        return contagemDecrescente(p-1);
    }
}


string Recursao::intervaloCrescente(int p, int q) {
    // Receba 2 valores e retorne os valores entre eles em ordem crescente;
    // No formato:
    // -4-3-2-1-
    // Seu código aqui
    string ret;

    if (p == q)
        return "-" + to_string(q) + "-";
    else
        ret = intervaloCrescente(p, q-1);
    ret = ret + to_string(q) + "-";
    return ret;
}

string Recursao::intervaloDecrescente(int p, int q) {
    // Receba 2 valores e retorne os valores entre eles em ordem decrescente;
    // No formato:
    // -4-3-2-1-
    // Seu código aqui
    string ret;

    if(p == q) {
        return "-" + to_string(p) + "-";
    } else {
        cout << "-" << p;
        return intervaloDecrescente(p-1, q);
    }
}

string Recursao::paresCrescente(int p) {
    // Receba um valor N par e retorne todos os números pares entre 0 e N em ordem crescente;
    // No formato:
    // -4-3-2-1-
    // Seu código aqui
    string ret;
    if (p == 0) {
        return "-" + to_string(p) + "-" ;
    }
    else
        ret = paresCrescente(p-2);
    ret = ret + to_string(p) + "-";
    return ret;
}

