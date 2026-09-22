algoritmo "TabuadaComPara"
var
    numero, i: inteiro
inicio
    escreva("Digite um número para ver a tabuada: ")
    leia(numero)
    
    escreval("")
    escreval("Tabuada do ", numero, ":")
    
    para i de 1 ate 10 faca
        escreva(numero, " x ", i, " = ", numero * i)
        escreval("")
    fimpara
fimalgoritmo
