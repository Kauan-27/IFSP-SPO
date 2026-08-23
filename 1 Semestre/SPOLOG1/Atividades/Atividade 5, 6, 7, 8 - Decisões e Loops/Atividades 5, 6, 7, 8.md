# Atividades SPOLOG1 (18/08 - 24/08)

**Aluno:** Kauan Andrade Silva  
**Professor:** Francisco Luciano

---

## Dados de Alunos

### Versão Simplificada

```portugol
algoritmo "Dados de Alunos - Simplificado"
// Disciplina: Lógica de Programação 1
// Descrição: Desenvolver um algoritmo (diagrama de blocos e portugol) – usando a estrutura ESCOLHA/CASO,  leia o número do registro de um aluno e escreva o respectivo nome do aluno e sua idade em dias.
// Autor: Kauan Andrade
// Data: 23/08/2026

var
   reg, idadeAnos, idadeDias: inteiro
   nome: caractere
   valido: logico

inicio
   Escreval("|--------------------------------|")
   Escreval("|        ALUNOS REGISTRADOS      |")
   Escreval("|--------------------------------|")
   Escreval("|  1 - Luiz S.  |  2 - Carlos S. |")
   Escreval("|--------------------------------|")
   Escreval("|  3 - Ana O.   |  4 - Thiago F. |")
   Escreval("|--------------------------------|")
   Escreval()
   Escreval("Digite o registro do aluno para mais dados:")
   Leia(reg)
   limpatela

   valido <- verdadeiro

   escolha (reg)
      caso 1 
         nome <- "   Luiz Silva   "
         idadeAnos <- 15
      caso 2
         nome <- "  Carlos Santos "
         idadeAnos <- 19
      caso 3
         nome <- "  Ana Oliveira  "
         idadeAnos <- 25
      caso 4
         nome <- "Thiago Ferreira "
         idadeAnos <- 28
      outrocaso
         valido <- falso
         Escreval("O número informado não corresponde a nenhum registro!")
   fimescolha

   se (valido) entao
      idadeDias <- (idadeAnos * 365) + (idadeAnos div 4)
      
      Escreval("|------------------------------------------------------------------|")
      Escreval("|                         DADOS DO ALUNO                           |")
      Escreval("|------------------------------------------------------------------|")
      Escreval("| Nº Registro |   Nome e Sobrenome   | Idade (dias) | Idade (anos) |")
      Escreval("|------------------------------------------------------------------|")
      Escreval("|      ", reg, "      |   ", nome, "   |     ", idadeDias:5:0, "    |      ", idadeAnos, "      |")
      Escreval("|------------------------------------------------------------------|")
   fimse
fimalgoritmo
```

### Versão Inicial

```portugol
algoritmo "Dados de Alunos - Primeira Versão"
// Disciplina: Lógica de Programação 1
// Descrição: Desenvolver um algoritmo (diagrama de blocos e portugol) – usando a estrutura ESCOLHA/CASO,  leia o número do registro de um aluno e escreva o respectivo nome do aluno e sua idade em dias.
// Autor: Kauan Andrade
// Data: 23/08/2026

var
 reg: inteiro

inicio
  Escreval("|--------------------------------|")
  Escreval("|       ALUNOS REGISTRADOS       |")
  Escreval("|--------------------------------|")
  Escreval("|  1 - Luiz S.  |  2 - Carlos S. |")
  Escreval("|--------------------------------|")
  Escreval("|  3 - Ana O.   |  4 - Thiago F. |")
  Escreval("|--------------------------------|")
  Escreval()
  Escreval("Digite o registro do aluno para mais dados:")
    Leia(reg)
  limpatela
  escolha (reg)
    caso 1 
      Escreval("|------------------------------------------------------------------|")
      Escreval("|                         DADOS DO ALUNO                           |")
      Escreval("|------------------------------------------------------------------|")
      Escreval("| Nº Registro |   Nome e Sobrenome   | Idade (dias) | Idade (anos) |")
      Escreval("|------------------------------------------------------------------|")
      Escreval("|      ", reg, "      |      Luiz Silva      |     ", (15 * 365) + (15 div 4)"     |      15      |")
      Escreval("|------------------------------------------------------------------|")
    caso 2
      Escreval("|------------------------------------------------------------------|")
      Escreval("|                         DADOS DO ALUNO                           |")
      Escreval("|------------------------------------------------------------------|")
      Escreval("| Nº Registro |   Nome e Sobrenome   | Idade (dias) | Idade (anos) |")
      Escreval("|------------------------------------------------------------------|")
      Escreval("|      ", reg, "      |     Carlos Santos    |     ", (19 * 365) + (19 div 4)"     |      19      |")
      Escreval("|------------------------------------------------------------------|")
    caso 3
      Escreval("|------------------------------------------------------------------|")
      Escreval("|                         DADOS DO ALUNO                           |")
      Escreval("|------------------------------------------------------------------|")
      Escreval("| Nº Registro |   Nome e Sobrenome   | Idade (dias) | Idade (anos) |")
      Escreval("|------------------------------------------------------------------|")
      Escreval("|      ", reg, "      |     Ana Oliveira     |     ", (25 * 365) + (25 div 4)"     |      25      |")
      Escreval("|------------------------------------------------------------------|")
    caso 4
      Escreval("|------------------------------------------------------------------|")
      Escreval("|                         DADOS DO ALUNO                           |")
      Escreval("|------------------------------------------------------------------|")
      Escreval("| Nº Registro |   Nome e Sobrenome   | Idade (dias) | Idade (anos) |")
      Escreval("|------------------------------------------------------------------|")
      Escreval("|      ", reg, "      |   Thiago Ferreira    |     ", (28 * 365) + (28 div 4)"    |      28      |")
      Escreval("|------------------------------------------------------------------|")
      
    outrocaso
      Escreval ("O número informado não corresponde a nenhum registro!")
  fimescolha
fimalgoritmo
```

---

## Calculadora de Média Aritmética e Contagem de Números

```portugol
algoritmo "Calculadora de Média Aritmética e Contagem de Números"
// Disciplina: Lógica de Programação 1
// Descrição: Desenvolver um algoritmo (PORTUGOL) – usando o laço PARA,  que leia a quantidade 1de N valores,  calcule e escreva: A. Média aritmética dos valores lidos; B. Quantidade e o percentual de valores positivos; C. Quantidade e o percentual de valores negativos.
// Autor: Kauan Andrade
// Data: 23/08/2026

var


inicio

fimalgoritmo
```

---

## Soma a Partir de N

```portugol
algoritmo "Soma a Partir de N"
// Disciplina: Lógica de Programação 1
// Descrição: Escreva um algoritmo (portugol) usando a estrutura enquanto/faça, para ler um valor A e um valor N. Imprimir a soma dos N números a partir de A (inclusive). Caso N seja negativo ou ZERO, deverá ser lido um novo N (apenas N).
// Autor: Kauan Andrade
// Data: 23/08/2026

var


inicio

fimalgoritmo
```

---

## Análise de Números Inteiros

```portugol
algoritmo "Análise de Números Inteiros"
// Disciplina: Lógica de Programação 1
// Descrição: Construa um algoritmo (diagrama de blocos), usando FAÇA/ENQUANTO,  que leia uma quantidade indeterminada de números inteiros positivos e no final mostre: A. O maior número digitado; B. O menor número digitado; C. A quantidade de vezes que o primeiro número é digitado. O final da série de números digitada deve ser indicado pela entrada de -1. 
// Autor: Kauan Andrade
// Data: 23/08/2026

var


inicio

fimalgoritmo
```
