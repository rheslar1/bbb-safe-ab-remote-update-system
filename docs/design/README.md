# BBB Safe A/B Remote Update System Design Package

## Purpose

BeagleBone Black update project that partitions eMMC into A/B OS slots, coordinates U-Boot health checks, and uses RAUC or Mender for rollback-safe remote updates.

This package defines the project as an implementation-ready embedded system. It covers system architecture, requirements, interface boundaries, runtime design, validation evidence, and phased delivery.

## Project Profile

| Field | Value |
| --- | --- |
| Repository | `rheslar1/bbb-safe-ab-remote-update-system` |
| Primary stack | C++17, C++ Design Patterns, SOLID, BeagleBone Black, A/B partition, U-Boot, RAUC/Mender, eMMC, Rollback |
| Review proof point | Field-safe BBB update lifecycle, bootloader rollback behavior, and remote fleet-management readiness. |

## Artifacts

- [System Design](system-design.md)
- [Requirements](requirements.md)
- [Interface Control](interface-control.md)
- [Runtime Design](runtime-design.md)
- [Validation Plan](validation-plan.md)
- [Implementation Roadmap](implementation-roadmap.md)
- [Draw.io UML](diagrams/system-design.drawio)
- [PNG UML](diagrams/system-design.png)
