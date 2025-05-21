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

    // verifica raiz
    REQUIRE(a->dado == 5);

    avl_destroi(a);
}

TEST_CASE("Caso ER") {
    avl_t* a;

    // entrada: {1, 2, 3}
    a = avl_cria();
    a = avl_insere(a, 1);
    a = avl_insere(a, 2);
    a = avl_insere(a, 3);
    REQUIRE(avl_vazia(a) != 1);

    // verifica raiz
    REQUIRE(a->dado == 2);

    avl_destroi(a);
}

TEST_CASE("Caso DR") {
    avl_t* a;

    // entrada: {3, 2, 1}
    a = avl_cria();
    a = avl_insere(a, 3);
    a = avl_insere(a, 2);
    a = avl_insere(a, 1);
    REQUIRE(avl_vazia(a) != 1);

    // verifica raiz
    REQUIRE(a->dado == 2);

    avl_destroi(a);
}

TEST_CASE("Caso DR-DR") {
    avl_t* a;

    // entrada: {9, 8, 7, 6, 5, 4, 3, 2, 1}
    a = avl_cria();
    a = avl_insere(a, 9);
    a = avl_insere(a, 8);
    a = avl_insere(a, 7);
    a = avl_insere(a, 6);
    a = avl_insere(a, 5);
    a = avl_insere(a, 4);
    a = avl_insere(a, 3);
    a = avl_insere(a, 2);
    a = avl_insere(a, 1);
    REQUIRE(avl_vazia(a) != 1);

    // verifica raiz
    REQUIRE(a->dado == 6);

    avl_destroi(a);
}
