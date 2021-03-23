#include "iostream"
using namespace std;

void binarySearch(int data_array[], int element, int tamanho) { // Recebe os dados do array, um elemento a ser encontrado e o tamanho
  int menor = 0; // O menor elemento começa em 0
  int maior = tamanho; // O maior elemento é o tamanho total do array
  
  while (menor <= maior) {

    int meio = (menor + maior)/2; // A posição do meio recebe o menor + o maior, dividido por 2
    int palpite = data_array[meio]; // O palpite vai receber o elemento na posição do meio (O elemento a ser encontrado é o que está na posição do meio?)

    if (palpite == element) { // Se o palpite encontrar o elemento...
      cout << "Element found at "<< meio <<" th index" << endl ; // Elemento encontrado!
      return ; // Encerra função

    } else if (palpite > element) { // Senão, se o palpite for um número maior que o elemento...
      maior = meio - 1; // Maior recebe a posição do meio - 1, eliminando todas as outras posições maiores

    } else {
      menor = meio + 1; // Senão, a variável menor recebe a posição do meio + 1, eliminando todas as outras posições menores

    }
  }
  cout << "Element Not Found" << endl ; // Se nada disso for encontrado, informar que o elemento não foi encotrad
  return ; // Number not found
}

int main() {
  int data_array[] = {2,10,23,44,100,121};
  int length = sizeof(data_array) / sizeof(int); // Tamanho recebe 24 (tamanho em bytes do array) / 4 (tamanho em bytes de um inteiro) = 6

  binarySearch(data_array, 3, length);  // Não encontra o elemento
  binarySearch(data_array, 2, length); // Encontrado na borda
  binarySearch(data_array, 44, length); // Encontrado no meio

  cout << "-----------------------------------" << endl;

  int number;

  cout << "\nWrite a number: "; // Input do usuário
  cin >> number;

  binarySearch(data_array, number, length);

  return 0;
}