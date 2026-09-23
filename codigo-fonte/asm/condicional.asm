; ==========================================
; Condicional em Assembly (if/else)
; Compare com: if (idade >= 18) em C
; ==========================================

section .data
    idade       dd 20
    msg_maior   db "Maior de idade!", 10
    len_maior   equ $ - msg_maior
    msg_menor   db "Menor de idade!", 10
    len_menor   equ $ - msg_menor

section .text
    global _start

_start:
    ; Carregando a idade
    mov eax, [idade]
    
    ; Comparando com 18 (cmp subtrai e seta flags, sem guardar resultado)
    cmp eax, 18
    
    ; Se for MENOR que 18, pula para o rótulo "menor"
    jl menor                ; jl = Jump if Less (pula se menor)
    
    ; --- Bloco "Maior de idade" ---
maior:
    mov eax, 4
    mov ebx, 1
    mov ecx, msg_maior
    mov edx, len_maior
    int 0x80
    jmp fim                 ; Pula o bloco "menor" (equivale ao else)

    ; --- Bloco "Menor de idade" ---
menor:
    mov eax, 4
    mov ebx, 1
    mov ecx, msg_menor
    mov edx, len_menor
    int 0x80

fim:
    ; Saindo do programa
    mov eax, 1
    mov ebx, 0
    int 0x80