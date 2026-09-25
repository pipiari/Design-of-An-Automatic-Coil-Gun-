# Controls and vision integration

The project investigated visual positioning with a pan/tilt assembly. The presentation describes fixed-step experiments followed by PID-based experiments. Archived code supports that this work took place, but does not establish one final tested software release.

The log records communication debugging, coordinate interpretation, image orientation, motion direction, and changes in where processing occurred. The presentation describes detection ambiguity and interference from the surroundings. This account documents those issues without reproducing operational targeting implementations.

Presentation slide 25 includes short error sequences and comments on convergence and overshoot. These are examples of observations during iteration, not settling-time, stability, or repeated-accuracy benchmarks. Configured update intervals and model confidence scores are not measured system performance.

The archive includes pan/tilt firmware, vision-to-actuation integration, and a ballistic calculation in one revision. These executable implementations are excluded. The Bluetooth example is only a serial bridge.

Sources: master log pp. 22-25, 39-42; presentation slides 15-26; Apr27_pid.ino; pantilt5.30.ino; code.pdf.
