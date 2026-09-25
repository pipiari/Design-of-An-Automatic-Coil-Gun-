# System architecture

| Layer | Later documented responsibility | Main evidence |
| --- | --- | --- |
| Image acquisition | OpenMV captured images; earlier experiments used color detection | Presentation slides 7-11; master log pp. 37-42 |
| Vision processing | Raspberry Pi hosted inference and image processing | Presentation slide 14; master log pp. 39-42 |
| Embedded control | Arduino handled pan/tilt actuation | Presentation slides 20-26; Arduino files |
| Mechanical assembly | Supported imaging, motion, electronics, and mobility | Master log pp. 23-24, 29-37 |
| Remote communication | Bluetooth supported subsystem communication and mobility work | Master log pp. 25-29; bluetooth.ino |
| Experiments | Historical launcher experiments documented separately | Master log pp. 8-20 |

This is a functional account, not a wiring diagram or build specification.

The April 8 and April 13, 2026 log entries describe connecting vision/control components, followed by direction and recognition problems. The presentation describes later visual-positioning demonstrations, but slide 27 still lists testing three modules together as future work. Michael's current research CV subsequently reports a working assembled prototype and consolidated documentation by June 2026. These statements describe different stages and are compatible. The completion report does not supply a repeatable end-to-end performance benchmark.

The code archive contains different revisions, interfaces, and assumptions. A dated filename does not establish the final deployed revision. This release does not pair those fragments into a runnable system or explain how to reconcile them.
