; ==========================================
; COMPARAÇÃO: Soma de dois números
; 
; Em C:
;   int a = 10, b = 20;
;   int soma = a + b;
;
; Em Assembly: (veja quantas linhas a mais!)
; ==========================================

section .data
    a       dd 10
    b       dd 20
    msg     db "Soma calculada!", 10
    msg_len equ $ - msg

section .bss
    soma    resd 1

section .text
    global _start

_start:
    ; Em C seria apenas: soma = a + b;
    ; Em Assembly precisamos de 3 instruções:
    mov eax, [a]        ; 1. Carrega 'a' no registrador
    add eax, [b]        ; 2. Soma 'b' ao registrador
    mov [soma], eax     ; 3. Guarda o resultado em 'soma'

    ; Imprimindo confirmação
    mov eax, 4
    mov ebx, 1
    mov ecx, msg
    mov edx, msg_len
    int 0x80

    ; Saindo
    mov eax, 1
    mov ebx, 0
    int 0x80