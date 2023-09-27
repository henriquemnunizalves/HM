include <stdbool.h>

// Definição da estrutura da lista sequencial
typedef struct {
    int* elements; // Array para armazenar os elementos
    int size;      // Tamanho atual da lista
    int capacity;  // Capacidade máxima da lista
} ListSeq;

// Função para verificar se a lista está vazia
bool list_is_empty(ListSeq* list) {
    // Se o tamanho da lista for igual a zero, ela está vazia
    return list->size == 0;
}
