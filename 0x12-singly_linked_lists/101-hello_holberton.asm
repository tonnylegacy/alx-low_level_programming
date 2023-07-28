section .data
    hello db "Hello, Holberton", 0

section .text
    global main
    extern printf

main:
    ; Align the stack on a 16-byte boundary
    mov rax, rsp
    and rax, 0xFFFFFFFFFFFFFFF0
    mov rsp, rax

    ; Prepare arguments for printf
    mov rdi, hello    ; Load the address of the hello string into rdi
    call printf       ; Call the printf function to print the string

    ; Clean up the stack and return
    mov rsp, rbp
    pop rbp
    ret              ; Return from the main function
