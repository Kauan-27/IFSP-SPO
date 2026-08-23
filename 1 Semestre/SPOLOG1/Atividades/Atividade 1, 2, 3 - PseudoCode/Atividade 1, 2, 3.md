# Atividades SPOLOG1 (04/08 - 10/08)

**Aluno:** Kauan Andrade Silva  
**Professor:** Francisco Luciano  

---

## 1. Cálculo do Salário Líquido

### Calculadora - Salário Líquido – Opção com 5 variáveis

```portugol
algoritmo "Calculadora - Salário Liquido"
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
```

### Calculadora - Salário Líquido – Opção com 3 variáveis

```portugol
algoritmo "Calculadora - Salário Liquido"
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
```

---

## 2. Conversão de moedas

```portugol
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
```

---

## 3. Cálculo e Análise de Votos

```portugol
algoritmo "Cálculo e Análise de Votos"
// Disciplina: Lógica de Programação 1
// Professor: Francisco Luciano
// Autor: Kauan Andrade
// Data: 06/08/2026

var vto, vbr, vnu, vin, vva, cod, dec: inteiro

inicio
  repita
    escreva("Quantos eleitores participaram da pesquisa: ")
    leia(vto)

    escreva("Votos em branco: ")
    leia(vbr)

    escreva("Votos nulos: ")
    leia(vnu)

    escreva("Indecisos: ")
    leia(vin)

    escreva("Votos válidos: ")
    leia(vva)

    se vto = (vbr + vnu + vin + vva) entao
      repita
        escreval("Selecione o tipo de voto a ser analisado:")
        escreval("1 - Brancos | 2 - Nulos | 3 - Indecisos | 4 - Válidos")
        leia(cod)

        se cod = 1 entao
          escreval("Total de votos em branco: ", vbr)
          escreval("Percentual: ", vbr * 100 / vto, "%")
        senao se cod = 2 entao
          escreval("Total de votos nulos: ", vnu)
          escreval("Percentual: ", vnu * 100 / vto, "%")
        senao se cod = 3 entao
          escreval("Total de indecisos: ", vin)
          escreval("Percentual: ", vin * 100 / vto, "%")
        senao se cod = 4 entao
          escreval("Total de votos válidos: ", vva)
          escreval("Percentual: ", vva * 100 / vto, "%")
        senao
          escreval("Opção inválida! Tente novamente.")
        fimse
      ate (cod >= 1) e (cod <= 4)

      escreval("Deseja verificar outro tipo de voto?")
      escreva("1 - Sim | 2 - Não: ")
      leia(dec)
    senao
      escreval("Valor de votos totais não confere! Tente novamente.")
    fimse
  ate vto = (vbr + vnu + vin + vva)

  escreval("Análise finalizada. Tenha um bom dia!")
fimalgoritmo
```
