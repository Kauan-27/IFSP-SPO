algoritmo "Calculadora - Conversão de Moedas"
// Disciplina: Lógica de Programação 1
// Professor: Francisco Luciano
// Autor: Kauan Andrade
// Data: 06/08/2026

var vr, cd, cl, ce: real

inicio
  escreva("Valor em R$: ")
  leia(vr)
  escreva("Cotação - Dólar: ")
  leia(cd)
  escreva("Cotação - Libra: ")
  leia(cl)
  escreva("Cotação - Euro: ")
  leia(ce)

  limpatela
  escreval("Valor em Reais = R$ ", vr)
  escreval("Conversão - Dólares = $ ", vr / cd)
  escreval("Conversão - Libras = £ ", vr / cl)
  escreval("Conversão - Euros = € ", vr / ce)
fimalgoritmo