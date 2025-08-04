.global divide
divide:
    ; a = r24 (low byte), b = r22 (low byte)
    ; returns result in r24:r25, or -9999 if divide by zero

    tst r22
    breq error          ; if b == 0, return error
    mov r18, r24        ; dividend
    mov r19, r22        ; divisor
    ldi r24, 0          ; result low byte
    ldi r25, 0          ; result high byte

div_loop:
    cp r18, r19
    brlo done
    sub r18, r19
    inc r24
    rjmp div_loop

done:
    ret

error:
    ; return -9999 = 0xD8F1
    ldi r24, 0xF1
    ldi r25, 0xD8
    ret
