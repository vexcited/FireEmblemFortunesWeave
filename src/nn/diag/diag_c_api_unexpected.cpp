extern "C" {

[[noreturn]] void nndetailUnexpectedDefaultImpl(const char* function,
  const char* file, int line);

[[noreturn]] void nndetailUnexpectedDefaultNoMessageImpl() {
  nndetailUnexpectedDefaultImpl("", "", 0);
}

}
