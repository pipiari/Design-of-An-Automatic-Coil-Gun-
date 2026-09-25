# Vision provenance

## Contributions

Presentation slides 12 and 28 explicitly credit Michael Lin for training the YOLO model used for the project. Michael Lu's statement emphasizes physical integration, final architecture, Arduino work, testing, and refinement of AI-assisted integration code. His current research CV also states that he trained an initial model, identified its limitations, and adapted a working model trained by a friend. This is consistent with the presentation's final-model trainer credit. The entire training process should not be attributed to Michael Lu.

## Available record

Yolo.pdf describes using the HZNU facade dataset for window recognition, annotation conversion, augmentation, and testing. Its dated notes report difficulty with large windows and qualitative improvement following additional training.

It references weight files, but actual weights, the dataset, and a complete training project were not supplied. The presentation's image-count statement is not adopted as a verified dataset size because the dataset manifest is absent.

## Deployment uncertainty

The master log records custom-model deployment problems and differences between development images and camera input. Resolution differences are suggested as an explanation; this is a hypothesis, not demonstrated causation.

A later presentation screenshot provides an example of detection output, not precision, recall, mAP, or a general success rate. The final checkpoint and its relationship to each code revision remain unverified.

No weights, training scripts, dataset, or targeting integration are distributed. Their licensing and individual authorship would need separate verification before future release.

Sources: current research CV p. 1 and technical resume p. 1; Yolo.pdf pp. 1-3, 9-10, 17-18; master log pp. 39-42; presentation slides 12-14, 28.
