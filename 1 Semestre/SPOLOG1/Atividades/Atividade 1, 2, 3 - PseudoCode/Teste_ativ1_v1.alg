algoritmo "Calculadora - Salário Liquido - 3 Variáveis"
// Disciplina: Lógica de Programação 1
// Professor: Francisco Luciano
// Autor: Kauan Andrade
// Data: 06/08/2026

var HT, VH, PD: real

inicio
  escreva("Valor da hora-aula: ")
  leia(VH)
  escreva("Horas trabalhadas: ")
  leia(HT)
  escreva("Desconto INSS: ")
  leia(PD)

  limpatela
  escreval("Salário bruto = ", VH * HT)
  escreval("Desconto Total = ", VH * HT * PD / 100)
  escreval("Salário líquido = ", VH * HT - VH * HT * PD / 100)
fimalgoritmo