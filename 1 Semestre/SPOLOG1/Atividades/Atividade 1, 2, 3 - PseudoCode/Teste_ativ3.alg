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
    limpatela

    escreva("Quantos eleitores votaram branco: ")
    leia(vbr)
    limpatela

    escreva("Quantos eleitores votaram nulo: ")
    leia(vnu)
    limpatela

    escreva("Quantos eleitores ficaram indecisos: ")
    leia(vin)
    limpatela

    escreva("Quantos eleitores votaram em um candidato: ")
    leia(vva)
    limpatela

    se vto = (vbr + vnu + vin + vva) entao
      repita
        repita
        escreval("Selecione o tipo de voto a ser analisado:")
        escreval("1 - Brancos | 2 - Nulos | 3 - Indecisos | 4 - Válidos")
        leia(cod)
        limpatela
        se cod = 1 entao
          escreval("Total de votos em branco: ", vbr)
          escreval("Percentual: ", vbr * 100 / vto, "%")
        senao 
          se cod = 2 entao
            escreval("Total de votos nulos: ", vnu)
            escreval("Percentual: ", vnu * 100 / vto, "%")
          senao
            se cod = 3 entao
              escreval("Total de indecisos: ", vin)
              escreval("Percentual: ", vin * 100 / vto, "%")
            senao
              se cod = 4 entao
                escreval("Total de votos válidos: ", vva)
                escreval("Percentual: ", vva * 100 / vto, "%")
              senao
                escreval("Opção inválida! Tente novamente.")
              fimse
            fimse
          fimse
        fimse
      ate (cod >= 1) e (cod <= 4)

      escreval("")
      escreval("Deseja verificar outro tipo de voto?")
      escreva("1 - Sim | 2 - Não: ")
      leia(dec)
      limpatela
      ate dec >= 2
      Escreval("Análise de votos foi finalizada. Tenha um bom dia!")
    senao
      escreval("Valor de votos totais não confere! Tente novamente.")
      Escreval ("")
    fimse
  ate vto = (vbr + vnu + vin + vva)

  escreval("Análise finalizada. Tenha um bom dia!")
fimalgoritmo