This component is a Third-Party Modified Version of the Fraunhofer FDK AAC Codec
Library for Android.

Modified on 2026-11-03.

The parametric stereo Huffman reader, delta decoding, concealment, envelope
border handling, and parameter mapping are adapted from the Android 7.1.1
release of the FDK AAC library. The source uses the observed SDK namespace and
decoder layout. Baseline extension payloads are consumed without interpreting
phase data. Invalid modes preserve the SDK positive-budget discard guard.
Platform alternatives are omitted.

The original license is retained in LICENSE.txt.
