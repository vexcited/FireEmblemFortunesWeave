int *nn_socket_GetHError(void) __asm__("_ZN2nn6socket9GetHErrorEv");

int *__h_errno_location(void)
{
  return nn_socket_GetHError();
}
