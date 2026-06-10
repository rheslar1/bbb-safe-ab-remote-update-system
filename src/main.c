#include <stdio.h>
#include <stddef.h>

typedef struct {
  const char *title;
  const char *summary;
  const char *evidence_target;
  const char *tags[8];
  size_t tag_count;
} project_profile_t;

static const project_profile_t profile = {
  "BBB Safe A/B Remote Update System",
  "BeagleBone Black update project that partitions eMMC into A/B OS slots, coordinates U-Boot health checks, and uses RAUC or Mender for rollback-safe remote updates.",
  "Field-safe BBB update lifecycle, bootloader rollback behavior, and remote fleet-management readiness.",
  {
  "BeagleBone Black",
  "A/B partition",
  "U-Boot",
  "RAUC/Mender",
  "eMMC",
  "Rollback"
  },
  6u
};

int main(void) {
  printf("%s\n", profile.title);
  printf("Summary: %s\n", profile.summary);
  printf("Evidence target: %s\n", profile.evidence_target);
  printf("Stack:");

  for (size_t index = 0; index < profile.tag_count; ++index) {
    printf(" %s%s", profile.tags[index], index + 1u == profile.tag_count ? "" : ",");
  }

  printf("\n");
  return 0;
}
