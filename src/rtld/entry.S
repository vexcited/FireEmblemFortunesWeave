.section .text.loader_entry, "ax", %progbits
.p2align 2
.global LoaderEntry
.type LoaderEntry, %function
LoaderEntry:
  b .Lentry
  .word LoaderMod0 - LoaderEntry
  .word LoaderVersion - LoaderEntry
.Lentry:
  cmp x0, #0
  b.ne .Lexception
  mov w19, w1
  nop
  adr x0, LoaderClearBegin
  nop
  adr x2, LoaderClearEnd
  sub x2, x2, x0
  mov w1, #0
  bl memset
  adr x0, LoaderEntry
  nop
  adr x1, LoaderDynamic
  mov x20, x0
  mov x21, x1
  bl LoaderBootstrapRelocate
  mov x0, x20
  mov x1, x21
  bl LoaderInitialize
  bl LoaderGetReadyCallback
  mov x20, x0
  bl LoaderGetInitializeCallback
  mov x21, x0
  bl LoaderGetFinalizeCallback
  mov x22, x0
  mov w0, w19
  nop
  adr x1, LoaderStartBoundary
  mov x2, x20
  mov x3, x21
  mov x4, x22
  bl LoaderStartPlt
.Lreturned:
  b .Lreturned
.Lexception:
  nop
  adr x2, LoaderReadyFlag
  ldr w2, [x2]
  cbz w2, .Lunhandled
  adrp x2, LoaderExceptionHandler
  ldr x2, [x2, :lo12:LoaderExceptionHandler]
  cbz x2, .Lunhandled
  br x2
.Lunhandled:
  mov x0, #0xf801
  nop
  adr x1, svcReturnFromException
  blr x1
.Lexception_returned:
  b .Lexception_returned
.size LoaderEntry, .-LoaderEntry
