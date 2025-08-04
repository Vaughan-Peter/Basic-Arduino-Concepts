.global add
add:
    ; a = r24:r25
    ; b = r22:r23
    add r24, r22    ; low byte a + b
    adc r25, r23    ; high byte a + b with carry
    ret             ; return result in r24:r25
