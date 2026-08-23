algoritmo "Calculadora - Salário Liquido - 5 Variáveis"
// Disciplina: Lógica de Programação 1
// Descrição: efetuar o cálculo do salário líquido de um professor.
// Autor: Kauan Andrade
// Data: 06/08/2026

var HT, VH, PD, TD, SB: real

inicio
  escreva("Valor da hora-aula: ")
  leia(VH)
  escreva("Horas trabalhadas: ")
  leia(HT)
  escreva("Desconto INSS: ")
  leia(PD)

  SB <- VH * HT
  TD <- SB * PD / 100

  limpatela
  escreval("Salário bruto = ", SB)
  escreval("Desconto Total = ", TD)
  escreval("Salário líquido = ", SB - TD)
fimalgoritmo