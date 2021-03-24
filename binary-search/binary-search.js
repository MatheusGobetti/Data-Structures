binarySearch = (data_array, element, tamanho) => {
  let menor = 0;
  let maior = tamanho;

  while (menor <= maior) {
    let meio = parseInt((menor + maior) / 2);
    let palpite = data_array[meio];

    if (palpite === element) {
      console.log('Elemento:', element, 'na posição:', meio);
      return ;
    } else if (palpite > element) {
      maior = meio - 1;
    } else {
      menor = meio + 1;
    }
  }
  console.log('Elemento não encontrado');
  return ;
}

function initialize () {
  let data_array = [12, 32, 45, 56, 78, 96, 100, 156, 178];
  let tamanho = data_array.length;

  binarySearch(data_array, 12, tamanho);
  binarySearch(data_array, 56, tamanho);
  binarySearch(data_array, 44, tamanho);
  binarySearch(data_array, 100, tamanho);
  binarySearch(data_array, 173, tamanho);
  binarySearch(data_array, 178, tamanho);
  binarySearch(data_array, 200, tamanho);

  console.log("\n", data_array);
}

initialize();
