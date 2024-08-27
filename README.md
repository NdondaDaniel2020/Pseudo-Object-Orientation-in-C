# Pseudo-Object Orientation in C

Este projeto demonstra uma abordagem de Pseudo-Orientação a Objetos em C, utilizando estruturas e ponteiros de função para simular conceitos de orientação a objetos, como encapsulamento e métodos.

## Estrutura do Projeto

- **pseudo_object.h**: Arquivo de cabeçalho contendo a definição da estrutura `t_person` e as bibliotecas necessárias.
- **pseudo_object.c**: Arquivo principal do projeto que implementa a estrutura `t_person` e demonstra como criar e utilizar objetos de maneira pseudo-orientada a objetos.

## Estrutura `t_person`

A estrutura `t_person` representa uma pessoa e inclui os seguintes campos:

- `name`: Uma string de até 10 caracteres que armazena o nome da pessoa.
- `age`: Um número inteiro de 8 bits sem sinal que representa a idade da pessoa.
- `height`: Um número inteiro de 8 bits sem sinal que representa a altura da pessoa em centímetros.
- `show`: Um ponteiro para uma função que imprime as informações da pessoa.

## Funções

- **person_print(t_person *self)**: Função que imprime o nome, a idade e a altura da pessoa.
- **new_person(char *name, uint8_t age, uint8_t height)**: Função que atua como um construtor, alocando memória para uma nova instância de `t_person`, inicializando seus atributos e associando a função `show`.

## Como Compilar

Para compilar o código, utilize o GCC ou qualquer outro compilador C. No terminal, execute o seguinte comando:

```bash
gcc pseudo_object.c -o pseudo_object
```
