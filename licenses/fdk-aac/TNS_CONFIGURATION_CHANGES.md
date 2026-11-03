This component is a Third-Party Modified Version of the Fraunhofer FDK AAC Codec Library for Android.

Modified on 2026-11-03.

Temporal noise shaping configuration, frequency-band rounding, Gaussian windows, and fixed-point power routines are adapted from the Android 7.1.1 release of the FDK AAC library. The source uses the observed SDK namespace and configuration layout. The psychoacoustic configuration remains opaque outside its recovered band prefix. Sample rates at or below 8000 select lower start band two. Power approximation uses five terms with 16-bit coefficients. Platform alternatives are omitted.

The original license is retained in LICENSE.txt.
