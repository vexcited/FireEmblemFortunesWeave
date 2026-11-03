This component is a Third-Party Modified Version of the Fraunhofer FDK AAC Codec
Library for Android.

Modified on 2026-11-03.

The bit-buffer initialization, circular reads and writes, backward access,
alignment, counters, feeding, copying, and fetching are adapted from the Android
7.1.1 release of the FDK AAC library. The source uses the observed SDK namespace
and layouts. Forward reads preserve the SDK length checks and read only the
required bytes. Cached reads clamp refills and pad missing bits with zeros.

The original license is retained in LICENSE.txt.
