section .data
    hello db "Hello, Holberton", 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, hello    ; Load the address of the hello string into rdi
    call printf       ; Call the printf function to print the string
    add rsp, 8        ; Adjust the stack pointer to clean up the stack
    pop rbp
    ret              ; Return from the main function
