/*
 * testes.cpp
 * Exercício sobre TAD lista.
 *
 * The MIT License (MIT)
 * 
 * Copyright (c) 2025 João Vicente, UFSM
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/* NÃO MUDAR ESSSE ARQUIVO!!!*/

#include "catch_amalgamated.hpp"

#include <cstring>
#include <cstdlib>

extern "C" {
    #include "avl.h"
}

TEST_CASE("Teste vazio") {
    avl_t* a;
    a= avl_cria();
    REQUIRE(avl_vazia(a) == 1);
    avl_destroi(a);
}

TEST_CASE("Caso 1") {
    avl_t* a;

    // entrada: {5, 3, 7}
    a = avl_cria();
    a = avl_insere(a, 5);
    a = avl_insere(a, 3);
    a = avl_insere(a, 7);
    REQUIRE(avl_vazia(a) != 1);

    // remove folha da esquerda
    REQUIRE(avl_busca(a, 3) == 1);
    a = avl_remove(a, 3);
    REQUIRE(avl_vazia(a) != 1);
    REQUIRE(avl_busca(a, 3) != 1);

    avl_destroi(a);
}

TEST_CASE("Caso 2") {
    avl_t* a;

    // entrada: {5, 3, 7}
    a = avl_cria();
    a = avl_insere(a, 5);
    a = avl_insere(a, 3);
    a = avl_insere(a, 7);
    REQUIRE(avl_vazia(a) != 1);

    // remove folha da direita
    REQUIRE(avl_busca(a, 7) == 1);
    a = avl_remove(a, 7);
    REQUIRE(avl_vazia(a) != 1);
    REQUIRE(avl_busca(a, 7) != 1);

    avl_destroi(a);
}

TEST_CASE("Caso 3") {
    avl_t* a;

    // entrada: {5, 3, 7}
    a = avl_cria();
    a = avl_insere(a, 5);
    a = avl_insere(a, 3);
    a = avl_insere(a, 7);
    REQUIRE(avl_vazia(a) != 1);

    // remove raiz
    REQUIRE(avl_busca(a, 5) == 1);
    a = avl_remove(a, 5);
    REQUIRE(avl_vazia(a) != 1);
    REQUIRE(avl_busca(a, 5) != 1);

    avl_destroi(a);
}



TEST_CASE("Caso 4") {
    avl_t* a;

    a = avl_cria();
    a = avl_insere(a, 6);
    a = avl_insere(a, 2);
    a = avl_insere(a, 8);
    a = avl_insere(a, 1);
    a = avl_insere(a, 4);
    a = avl_insere(a, 3);
    REQUIRE(avl_vazia(a) != 1);

    // caso 1 visto em aula
    REQUIRE(avl_busca(a, 3) == 1);
    a = avl_remove(a, 3);
    REQUIRE(avl_vazia(a) != 1);
    REQUIRE(avl_busca(a, 3) != 1);


    avl_destroi(a);
}

TEST_CASE("Caso 5") {
    avl_t* a;

    a = avl_cria();
    a = avl_insere(a, 6);
    a = avl_insere(a, 2);
    a = avl_insere(a, 8);
    a = avl_insere(a, 1);
    a = avl_insere(a, 4);
    a = avl_insere(a, 3);
    REQUIRE(avl_vazia(a) != 1);

    // caso 2 visto em aula
    REQUIRE(avl_busca(a, 4) == 1);
    a = avl_remove(a, 4);
    REQUIRE(avl_vazia(a) != 1);
    REQUIRE(avl_busca(a, 4) != 1);


    avl_destroi(a);
}

TEST_CASE("Caso 6") {
    avl_t* a;

    a = avl_cria();
    a = avl_insere(a, 6);
    a = avl_insere(a, 2);
    a = avl_insere(a, 8);
    a = avl_insere(a, 1);
    a = avl_insere(a, 4);
    a = avl_insere(a, 3);
    REQUIRE(avl_vazia(a) != 1);

    // caso 1 visto em aula
    REQUIRE(avl_busca(a, 6) == 1);
    a = avl_remove(a, 6);
    REQUIRE(avl_vazia(a) != 1);
    REQUIRE(avl_busca(a, 6) != 1);


    avl_destroi(a);
}

TEST_CASE("Caso 7") {
    avl_t* a;

    a = avl_cria();
    a = avl_insere(a, 20);
    a = avl_insere(a, 2);
    a = avl_insere(a, 1);
    a = avl_insere(a, 4);
    a = avl_insere(a, 3);
    a = avl_insere(a, 40);
    a = avl_insere(a, 30);
    a = avl_insere(a, 25);
    a = avl_insere(a, 35);
    a = avl_insere(a, 50);
    a = avl_insere(a, 45);
    a = avl_insere(a, 55);
    REQUIRE(avl_vazia(a) != 1);

    // variacao do ultimo slide da aula, remove 40
    REQUIRE(avl_busca(a, 40) == 1);
    a = avl_remove(a, 40);
    REQUIRE(avl_vazia(a) != 1);
    REQUIRE(avl_busca(a, 40) != 1);


    avl_destroi(a);
}

