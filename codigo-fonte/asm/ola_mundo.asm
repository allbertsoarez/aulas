; ==========================================
; Olá Mundo em Assembly (NASM - Linux x86)
; Compare com o mesmo programa em C!
; ==========================================

section .data
    msg db "Ola, Mundo!", 10   ; 10 = \n (nova linha)
    len equ $ - msg             ; Calcula o tamanho da string

section .text
    global _start

_start:
    ; --- Chamada de sistema: sys_write ---
    mov eax, 4          ; Número da syscall (4 = sys_write)
    mov ebx, 1          ; Descritor de arquivo (1 = stdout)
    mov ecx, msg        ; Endereço da mensagem
    mov edx, len        ; Tamanho da mensagem
    int 0x80            ; Chama o kernel do Linux

    ; --- Chamada de sistema: sys_exit ---
    mov eax, 1          ; Número da syscall (1 = sys_exit)
    mov ebx, 0          ; Código de saída (0 = sucesso)
    int 0x80            ; Chama o kernel do Linux