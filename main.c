/*
 * main.c
 * Classe principal de execução da Fila Dupla(Deque).
 * Author: Thiago Leite
 */

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(void) {

	iniciar();

	int opcao;
	char valor;
	int tamanho;

	do {

		printf("\n");
		printf("FILA DUPLA(DEQUE)\n");
		printf("Escolha a opcao\n");
		printf("0. Sair\n");
		printf("1. ENQUEUE\n");
		printf("2. ENQUEUE HEAD\n");
		printf("3. HEAD\n");
		printf("4. DEQUEUE\n");
		printf("5. DEQUEUE FIM\n");
		printf("6. SIZE\n");
		printf("7. Exibir fila\n");
		printf("Digite uma opção:");
		scanf("%d", &opcao);

		switch (opcao) {
		case 0:
			exit(1);
			break;

		case 1:
			printf("Digite um valor a ser enfileirado:");
			scanf(" %c", &valor);
			enqueue(valor);
			break;

		case 2:
			printf("Digite um valor a ser enfileirado no HEAD:");
			scanf(" %c", &valor);
			enqueue_head(valor);
			break;

		case 3:
			valor = head();
			if (valor)
				printf("Cabeça da fila: %c\n\n", valor);
			break;

		case 4:
			valor = dequeue();
			if (valor)
				printf("Elemento desenfileirado: %c\n\n", valor);
			break;

		case 5:
			valor = dequeue_fim();
			if (valor)
				printf("Elemento desenfileirado do fim: %c\n\n", valor);
			break;

		case 6:
			tamanho = size();
			printf("Quantidade de elementos da fila: %d\n\n", tamanho);
			break;

		case 7:
			exibir();
			break;

		default:
			printf("Comando invalido\n\n");
			break;
		}
	} while (opcao);

	return 0;
}
