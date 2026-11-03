This component is a Third-Party Modified Version of the Fraunhofer FDK AAC Codec Library for Android.

Modified on 2026-11-03.

Temporal noise shaping detection, autocorrelation, coefficient quantization, and normalized inverse square root are adapted from the Android 7.1.1 release of the FDK AAC library. The source uses the observed SDK namespace and layouts. Zero normalization and wrapping fixed-point arithmetic follow the target. A zero residual autocorrelation is changed to one before prediction gain division. Platform alternatives are omitted.

The original license is retained in LICENSE.txt.
