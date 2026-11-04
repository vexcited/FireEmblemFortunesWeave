Modifications from upstream libwebm 1.0.0.29.

- `mkvparser/mkvparser.h`: `mkvparser::Cluster` declares `AddRef` and `DecRef`, and `mkvparser::Segment` declares `IsInClusterTable`. The SDK revision reference counts clusters and answers whether one still sits in the segment table, MatroskaExtractor relies on both, and the vendored revision has neither.
