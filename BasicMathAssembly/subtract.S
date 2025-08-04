.global subtract
subtract:
    ; a = r24:r25
    ; b = r22:r23
    sub r24, r22    ; low byte a - b
    sbc r25, r23    ; high byte a - b with borrow
    ret
