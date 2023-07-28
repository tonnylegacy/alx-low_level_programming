section .data
    format db "Hello, Holberton", 0

section .text
    global main
    extern printf

main:
    ; Prepare arguments for printf
    mov edi, format   ; Load the address of the format string into edi
    xor eax, eax      ; Clear eax to indicate no floating-point arguments (XMM0 not used)

    ; Call the printf function to print the string
    call printf

    ; Clean up the stack and return
    xor eax, eax      ; Set return value to 0
    ret               ; Return from the main function
