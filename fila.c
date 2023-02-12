/*
 * main.c
 * Classe de implemantação da ED Fila Dupla(Deque).
 * Author: Thiago Leite
 */

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int quantidade = 0;
int cabeca, fim = -1;

void iniciar() {
	quantidade = 0;
	cabeca = -1;
	fim = -1;
}

void enqueue(char caractere) {

	if (full()) {
		printf("Fila cheia!\n");
	} else {

		if (empty()) {
			cabeca = 0;
			fim = 0;
		} else {

			if (fim == TAMANHO - 1) {
				fim = 0;
			} else {
				fim = fim + 1;
			}
		}

		quantidade = quantidade + 1;
		fila[fim] = caractere;
	}
}

void enqueue_head(char caractere) {

	if (full()) {
		printf("Fila cheia!\n");
	} else {
		if (empty()) {
			cabeca = 0;
			fim = 0;
		} else {
			if (cabeca == 0) {
				cabeca = TAMANHO - 1;
			} else {
				cabeca = cabeca - 1;
			}
		}

		quantidade = quantidade + 1;
		fila[cabeca] = caractere;
	}
}

int size() {
	return quantidade;
}

char head() {
	return fila[cabeca];
}

char dequeue() {

	char caractere = '\0';

	if (empty()) {
		printf("Fila vazia!\n");
		return '\0';
	} else {

		caractere = fila[cabeca];
		fila[cabeca] = '\0';

		if (cabeca == fim) {
			cabeca = -1;
			fim = -1;
		} else {

			if (cabeca == TAMANHO - 1) {
				cabeca = 0;
			} else {
				cabeca = cabeca + 1;
			}
		}

		quantidade = quantidade - 1;
		return caractere;
	}
}

char dequeue_fim() {

	char caractere = '\0';

	if (empty()) {
		printf("Fila vazia!\n");
		return '\0';
	} else {

		caractere = fila[fim];
		fila[fim] = '\0';

		if (cabeca == fim) {
			cabeca = -1;
			fim = -1;
		} else {

			if (fim == 0) {
				fim = TAMANHO - 1;
			} else {
				fim = fim + 1;
			}
		}

		quantidade = quantidade - 1;
		return caractere;
	}
}

int empty() {
	return quantidade == 0;
}

int full() {
	return quantidade == TAMANHO;
}

void exibir() {

	if (empty()) {

		printf("Fila vazia!\n");
		return;
	}

	printf("Fila:\n");

	int i;
	for (i = 0; i < TAMANHO; i++) {
		printf("%c ", fila[i]);
	}

	printf("\n");

	for (i = 0; i < TAMANHO; i++) {
		printf("%d ", i);
	}
	printf("\n");
}
