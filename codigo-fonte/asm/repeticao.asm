; ==========================================
; Repetição em Assembly (loop)
; Imprime números de 1 a 5
; Compare com: for(i=1; i<=5; i++) em C
; ==========================================

section .data
    newline db 10           ; Caractere de nova linha

section .bss
    digito resb 1           ; Reserva 1 byte para o caractere do dígito

section .text
    global _start

_start:
    mov ecx, 1              ; ecx = contador (começa em 1)

loop_inicio:
    cmp ecx, 5              ; Compara contador com 5
    jg loop_fim             ; Se maior que 5, sai do loop

    ; Convertendo número para caractere ASCII (soma 48 = '0')
    mov eax, ecx
    add eax, 48             ; 48 é o código ASCII do '0'
    mov [digito], al        ; Guarda o caractere

    ; Imprimindo o dígito
    mov eax, 4
    mov ebx, 1
    mov ecx, digito
    mov edx, 1
    int 0x80

    ; Imprimindo nova linha
    mov eax, 4
    mov ebx, 1
    mov ecx, newline
    mov edx, 1
    int 0x80

    ; Incrementando o contador (recarregando ecx pois a syscall o modifica)
    mov ecx, [digito]
    sub ecx, 48             ; Volta para número
    inc ecx                 ; Incrementa
    
    jmp loop_inicio         ; Volta para o início do loop

loop_fim:
    ; Saindo do programa
    mov eax, 1
    mov ebx, 0
    int 0x80