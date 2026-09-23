; ==========================================
; Variáveis em Assembly
; Em Assembly, "variável" é apenas um rótulo
; para um endereço de memória!
; ==========================================

section .data
    numero  dd 42           ; dd = double word (4 bytes, inteiro)
    caractere db 'A'        ; db = byte (1 byte, caractere)
    msg     db "Valor: ", 0
    msg_len equ $ - msg

section .bss
    resultado resd 1        ; Reserva 4 bytes para o resultado

section .text
    global _start

_start:
    ; Carregando o valor da "variável" numero no registrador EAX
    mov eax, [numero]       ; Os colchetes [] significam "conteúdo do endereço"
    
    ; Somando 8 ao valor
    add eax, 8
    
    ; Armazenando o resultado na "variável" resultado
    mov [resultado], eax

    ; Imprimindo a mensagem
    mov eax, 4
    mov ebx, 1
    mov ecx, msg
    mov edx, msg_len
    int 0x80

    ; Saindo do programa
    mov eax, 1
    mov ebx, 0
    int 0x80