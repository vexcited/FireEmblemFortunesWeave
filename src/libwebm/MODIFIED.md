Modifications from upstream libwebm 1.0.0.29.

- `mkvparser/mkvparser.h`: `mkvparser::Cluster` declares `AddRef` and `DecRef`. The SDK revision reference counts clusters, MatroskaExtractor relies on it, and the vendored revision has no such methods.
