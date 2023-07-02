	SECTION .data
msg:	db "Hello, Holberton", 0xa, 0
	
	SECTION .text
        extern printf
	global main
main:
	mov 	esi, msg
	call    printf
	mov	eax,0
