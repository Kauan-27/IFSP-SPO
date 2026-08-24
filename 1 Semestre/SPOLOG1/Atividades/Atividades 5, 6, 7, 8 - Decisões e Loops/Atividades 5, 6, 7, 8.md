
<!-- markdownlint-disable MD033 -->
<!-- markdownlint-disable MD041 -->
</style>

<div style="page-break-inside: avoid;">

# Atividades SPOLOG1 (18/08 - 24/08)

**Aluno:** Kauan Andrade Silva  
**Professor:** Francisco Luciano

---

## 5. Dados de Alunos

* **Enunciado:** Desenvolver um algoritmo (diagrama de blocos e portugol) – usando a estrutura ESCOLHA/CASO,  leia o número do registro de um aluno e escreva o respectivo nome do aluno e sua idade em dias, a partir do quadro abaixo:

<div align="center">
  <img src="./Imagens/Tabela5.png" alt="Tabela 5" width="500">
</div>

### **Versão em Portugol**

```portugol
algoritmo "Dados de Alunos - Simplificado"
// Disciplina: Lógica de Programação 1
// Descrição: Desenvolver um algoritmo (diagrama de blocos e portugol) – usando a
// estrutura ESCOLHA/CASO,  leia o número do registro de um aluno e escreva o
// respectivo nome do aluno e sua idade em dias.
// Autor: Kauan Andrade
// Data: 23/08/2026
var
   reg, iAnos, iDias: inteiro
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
         iAnos <- 15
      caso 2
         nome <- "  Carlos Santos "
         iAnos <- 19
      caso 3
         nome <- "  Ana Oliveira  "
         iAnos <- 25
      caso 4
         nome <- "Thiago Ferreira "
         iAnos <- 28
      outrocaso
         valido <- falso
         Escreval("O número informado não corresponde a nenhum registro!")
    fimescolha
      se (valido) entao
        iDias <- (iAnos * 365) + (iAnos div 4)
          Escreval("|---------------------------------------------|")
          Escreval("|               DADOS DO ALUNO                |")
          Escreval("|---------------------------------------------|")
          Escreval("| Nº Reg. |  Nome e Sobrenome  | Idade (dias) |")
          Escreval("|---------------------------------------------|")
          Escreval("|    ", reg, "    |  ", nome, "  |     ", iDias:5:0, "    |")
          Escreval("|---------------------------------------------|")
      fimse
fimalgoritmo
```

</div>

---

<div align="center">

## **RESULTADO 5**

</div>

<div style="display: flex; gap: 10px;">
  <img src="./Imagens/Resultado5.1.png" alt="Resultado 5.1">
  <img src="./Imagens/Resultado5.2.png" alt="Resultado 5.2">
</div>

---

<div style="page-break-inside: avoid;">

### **Versão em Fluxograma**

<div align="center">
  <img src="./Imagens/Fluxo5.png" alt="Fluxo 5" width="500">
</div>

---

</div>

<div style="page-break-inside: avoid;">

## 6. Calculadora de Média Aritmética e Contagem de Números

* **Enunciado:** Desenvolver um algoritmo (PORTUGOL) – usando o laço PARA,  que leia a quantidade de N valores,  calcule e escreva: A. Média aritmética dos valores lidos; B. Quantidade e o percentual de valores positivos; C. Quantidade e o percentual de valores negativos.

```portugol
algoritmo "Calculadora de Média Aritmética e Contagem de Números"
// Disciplina: Lógica de Programação 1
// Descrição: Desenvolver um algoritmo (PORTUGOL) – usando o laço PARA,  que leia a quantidade 1de N valores,  calcule e escreva: A. Média aritmética dos valores lidos; B. Quantidade e o percentual de valores positivos; C. Quantidade e o percentual de valores negativos.
// Autor: Kauan Andrade
// Data: 23/08/2026

var
n, posi, neg, contador:inteiro
num, soma: real

inicio
  Escreva("Insira quantos números utilizará: ")
    Leia(n)
  limpatela
  para contador de 1 ate n passo 1 faca
    Escreva("Digite o ", contador,"º valor")
      Leia(num)
    limpatela
    se num < 0 entao
      neg <- neg + 1
    fimse
    se num > 0 entao
      posi <- posi + 1
    fimse
    soma <- soma + num
      Escreval(num, " foi computado com sucesso!")
  fimpara
  limpatela
  Escreval("A média aritmética é: ", soma / n:10:2)
  Escreval()
  Escreval("Você utilizou: ")
  Escreval(posi," número(s) positivo(s)")
  Escreval(neg," número(s) negativo(s)")
  Escreval(n - posi - neg," número(s) zero")
  Escreval()
  Escreval("No total foram: ")
  Escreval(posi/n*100:2:2 ,"% de valores positivos;")
  Escreval( neg/n*100:2:2 ,"% de valores negativos;")
  Escreval("E ", 100 - (posi/n*100) - (neg/n*100):2:2,"% de zeros utilizados.")
fimalgoritmo
```

---

</div>
<div style="page-break-inside: avoid;">

<div align="center">

## **RESULTADO 6**

</div>

<div style="display: flex; flex-direction: column; gap: 35px; align-items: center;">
  <div style="display: flex; gap: 10px;">
    <img src="./Imagens/Resultado6.1.png" alt="Resultado 6.1">
    <img src="./Imagens/Resultado6.2.png" alt="Resultado 6.2">
  </div>
  <div style="display: flex; gap: 20px;">
    <img src="./Imagens/Resultado6.3.png" alt="Resultado 6.3">
    <img src="./Imagens/Resultado6.4.png" alt="Resultado 6.4">
  </div>
    <div style="display: flex; justify-content: center;">
    <img src="./Imagens/Resultado6.5.png" alt="Resultado 6.5">
  </div>
</div>

---

</div>
<div style="page-break-inside: avoid;">

## 7. Soma a Partir de N

* **Enunciado:** Escreva um algoritmo (portugol) usando a estrutura enquanto/faça, para ler um valor A e um valor N. Imprimir a soma dos N números a partir de A (inclusive). Caso N seja negativo ou ZERO, deverá ser lido um novo N (apenas N). Veja na tabela a seguir algumas entradas para teste:

<div align="center">
  <img src="./Imagens/Tabela7.png" alt="Tabela 7" width="500">
</div>

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

</div>

---

<div style="page-break-inside: avoid;">

## 8.  Análise de Números Inteiros

* **Enunciado:** Construa um algoritmo (diagrama de blocos), usando FAÇA/ENQUANTO,  que leia uma quantidade indeterminada de números inteiros positivos e no final mostre: A. O maior número digitado; B. O menor número digitado; C. A quantidade de vezes que o primeiro número é digitado. O final da série de números digitada deve ser indicado pela entrada de -1.

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

</div>
