/*
 * fila.h
 * Header de definição da ED Fila Dupla(Deque).
 * Author: Thiago Leite
 */

#pragma once

#define TAMANHO 8
int fila[TAMANHO];

void iniciar();
void enqueue(char caractere);
void enqueue_head(char caractere);
int size();
char head();
char dequeue();
char dequeue_fim();
int empty();
int full();
void exibir();
