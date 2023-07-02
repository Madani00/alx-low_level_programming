	SECTION .text
        extern printf
	global main
main:
	mov 	edi, msg
	mov	eax, 0
	call    printf
        
	SECTION .data
msg:    db "Hello, Holberton", 0xa, 0
