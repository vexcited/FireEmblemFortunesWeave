void call_atomic_a_crash(void)
{
  *(volatile char *)0 = 0;
}
