.global multiply
multiply:
    ; Only using 8-bit lower bytes for simplicity
    ; a = r24 (low byte), b = r22 (low byte)
    mov r18, r24
    mov r19, r22
    mul r18, r19        ; result in r0:r1
    mov r24, r0
    mov r25, r1
    clr r1              ; clear r1 per GCC convention
    ret
