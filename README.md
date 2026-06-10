# BBB Safe A/B Remote Update System

BeagleBone Black update project that partitions eMMC into A/B OS slots, coordinates U-Boot health checks, and uses RAUC or Mender for rollback-safe remote updates.

## Portfolio Purpose

This repository is an Embedded Systems project scaffold for the Rheslar portfolio. It is designed to become a hardware-backed project with build output, validation logs, and reviewable implementation evidence.

## Stack

- BeagleBone Black
- A/B partition
- U-Boot
- RAUC/Mender
- eMMC
- Rollback

## Quick Start

```bash
cmake -S . -B build
cmake --build build
./build/bbb_safe_ab_remote_update_system
python -m unittest discover -s tests
```

## Implementation Slices

- Native starter executable that exposes the project identity, stack, and validation target.
- Architecture document with control boundaries, data flow, safety assumptions, and evidence plan.
- Unit smoke test that keeps source, docs, and CI files present as the repo grows.
- GitHub Actions workflow for configure, build, executable smoke run, and repository validation.

## Evidence Target

Field-safe BBB update lifecycle, bootloader rollback behavior, and remote fleet-management readiness.

## Remote

Intended public repository: https://github.com/rheslar1/bbb-safe-ab-remote-update-system
