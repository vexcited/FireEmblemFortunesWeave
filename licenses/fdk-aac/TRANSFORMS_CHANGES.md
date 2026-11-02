This component is a Third-Party Modified Version of the Fraunhofer FDK AAC Codec
Library for Android.

Modified on 2026-11-03.

The FFT, radix-two FFT, DCT, DST, and coefficient tables are adapted from the
Android 7.1.1 release of the FDK AAC library. The source uses the observed SDK
namespace, integer widths, packed 16-bit coefficients, and fixed-point
arithmetic. DST IV retains the SDK's 64-bit negated products before narrowing.
The window lookup contains the sine windows used by these transforms. Platform
alternatives and unrelated helpers are omitted.

The original license is retained in LICENSE.txt.
