This component is a Third-Party Modified Version of the Fraunhofer FDK AAC Codec
Library for Android.

Modified on 2026-11-03.

The parametric stereo reset, state scaling, hybrid filter bank, decorrelation,
rotation, fixed-point division, and coefficient tables are adapted from the
Android 7.1.1 release of the FDK AAC library. The source uses the observed SDK
namespace and 8,584-byte decoder layout. It preserves the target integer widths,
coefficient truncation, trigonometric constants, and index guards. The hybrid
filter uses the recovered eight-point FFT. Platform alternatives are omitted.

The original license is retained in LICENSE.txt.
