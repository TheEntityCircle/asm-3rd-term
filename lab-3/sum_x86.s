.text 
.globl sum
sum:
    movl 4(%esp),%eax
    addl 8(%esp),%eax
    ret

