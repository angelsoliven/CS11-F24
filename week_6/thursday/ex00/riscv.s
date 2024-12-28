.text
main:
    din a0                  # Input decimal
    beq a0, zero, no_in     # if (input == 0) goto no_in   (No values were entered (i.e. the first input is a zero))
    mv t0, a0               # sum = input
    mv t1, a0               # max = input

loop:
    din a0                  # Input decimal
    beq a0, zero, done      # if (input == 0) goto done
    add t0, t0, a0          # sum += input
    bge t1, a0, loop        # if (max >= input) goto loop
    mv t1, a0               # max = input
    j loop                  # goto loop

done:
    # Output sum
    la a0, s_sum
    sout a0
    dout t0

    # Output max
    la a0, s_max
    sout a0
    dout t1

    halt                    # End program

no_in:
    # Output 'no input'
    la a0, s_no_in
    sout a0

    halt                    # End program

.data
s_no_in:    .asciz "no input\n"
s_sum:      .asciz "Sum: "
s_max:      .asciz "\nMax: "
