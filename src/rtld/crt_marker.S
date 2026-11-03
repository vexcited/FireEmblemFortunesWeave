.text
.p2align 2
.global _ZN2fw4rtld15MarkLoaderReadyEv
.type _ZN2fw4rtld15MarkLoaderReadyEv, %function
_ZN2fw4rtld15MarkLoaderReadyEv:
  pacibsp
  mov x0, x30
  adrp x2, LoaderReadyFlag
  add x2, x2, :lo12:LoaderReadyFlag
  mov w1, #1
  str w1, [x2]
  mov x30, x0
  autibsp
  ret
.size _ZN2fw4rtld15MarkLoaderReadyEv, .-_ZN2fw4rtld15MarkLoaderReadyEv
