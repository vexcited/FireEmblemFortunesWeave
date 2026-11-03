.section .text.loader_resolver, "ax", %progbits
.p2align 2
.global LoaderResolvePlt
.type LoaderResolvePlt, %function
LoaderResolvePlt:
  ldr x17, [sp]
  add sp, sp, #0x10
  pacibsp
  stp x29, x30, [sp, #-0x10]!
  stp x8, xzr, [sp, #-0x10]!
  stp x6, x7, [sp, #-0x10]!
  stp x4, x5, [sp, #-0x10]!
  stp x2, x3, [sp, #-0x10]!
  stp x0, x1, [sp, #-0x10]!
  stp q6, q7, [sp, #-0x20]!
  stp q4, q5, [sp, #-0x20]!
  stp q2, q3, [sp, #-0x20]!
  stp q0, q1, [sp, #-0x20]!
  mov x29, sp
  sub x1, x17, x16
  sub x1, x1, #8
  lsr x1, x1, #3
  ldur x0, [x16, #-8]
  bl LoaderBindJumpSlot
  mov x16, x0
  ldp q0, q1, [sp], #0x20
  ldp q2, q3, [sp], #0x20
  ldp q4, q5, [sp], #0x20
  ldp q6, q7, [sp], #0x20
  ldp x0, x1, [sp], #0x10
  ldp x2, x3, [sp], #0x10
  ldp x4, x5, [sp], #0x10
  ldp x6, x7, [sp], #0x10
  ldp x8, xzr, [sp], #0x10
  ldp x29, x30, [sp], #0x10
  autibsp
  mov x17, x30
  xpaclri
  sub x17, x17, x30
  cbz x17, .Lresolved
  udf #0x8005
.Lresolved:
  br x16
.size LoaderResolvePlt, .-LoaderResolvePlt

.section .text.loader_plt, "ax", %progbits
.p2align 2
.global LoaderPlt
.type LoaderPlt, %function
LoaderPlt:
  stp x16, x30, [sp, #-0x10]!
  adrp x16, LoaderPltResolverSlot
  ldr x17, [x16, :lo12:LoaderPltResolverSlot]
  add x16, x16, :lo12:LoaderPltResolverSlot
  br x17
.size LoaderPlt, .-LoaderPlt

.section .text.loader_start_plt, "ax", %progbits
.p2align 2
.global LoaderStartPlt
.type LoaderStartPlt, %function
LoaderStartPlt:
  adrp x16, LoaderStartSlot
  ldr x17, [x16, :lo12:LoaderStartSlot]
  add x16, x16, :lo12:LoaderStartSlot
  br x17
.size LoaderStartPlt, .-LoaderStartPlt
