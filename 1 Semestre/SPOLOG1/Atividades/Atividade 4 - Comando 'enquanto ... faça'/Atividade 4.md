# Atividade SPOLOG1 em sala (11/08)

**Aluno:** Kauan Andrade Silva  
**Professor:** Francisco Luciano  

## 4. Compras à Vista e à Prazo

```portugol
algoritmo "Cálculo compra à prazo e à vista"
//Disciplina: SPOLOG1
//Data: 11/08/2026
//Aluno: Kauan Andrade
//Objetivo: Uma loja de departamentos utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba código e valor de 15 transações usando laços de repetição Enquanto/faça. Calcule e mostre: O valor total das compras à vista; O valor total das compras a prazo; O valor total das compras efetuadas.
//Professor: Francisco Luciano

var
cont: inteiro
pag: caractere
valor, totV, totP, totG, primPres:real

inicio
cont <- 1
totV <- 0
totP <- 0
totG <- 0
  Enquanto (cont <= 5) faca
    Escreva("Digite o código da transação (V/P): ")
      Leia(pag)
    limpatela
        
    Escreval("Digite o valor da transação: ")
    Escreva("R$ ")
      Leia(valor)
    limpatela
      Escolha pag
        Caso "V", "v"
          totV <- totV + valor
          totG <- totG + valor
        Caso "P", "p"
          totP <- totP + valor
          totG <- totG + valor
        OutroCaso
          Escreval("Código inválido!")
          cont <- cont - 1 
        FimEscolha
      cont <- cont + 1
    FimEnquanto
primPres <- totP/3
    Escreval("Valor total à vista: R$ ", totV:10:2)
    Escreval("Valor total à prazo: R$ ", totP:10:2)
    Escreval("Valor total das compras efetuadas: R$ ", totG:10:2)
    Escreval("Valor da 1ª prestação das compras a prazo (3x): R$ ", primPres:10:2)
fimalgoritmo
```
