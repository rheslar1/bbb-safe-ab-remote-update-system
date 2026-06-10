#include <array>
#include <cassert>
#include <string_view>

class IReadinessRule {
 public:
  virtual ~IReadinessRule() = default;
  virtual bool passes(std::string_view evidenceTarget) const = 0;
};

class RequiredEvidenceRule final : public IReadinessRule {
 public:
  bool passes(std::string_view evidenceTarget) const override {
    return !evidenceTarget.empty();
  }
};

struct ProjectProfile {
  std::string_view title;
  std::string_view summary;
  std::string_view evidenceTarget;
  std::array<std::string_view, 9> tags;
};

constexpr ProjectProfile profile{
  "BBB Safe A/B Remote Update System",
  "BeagleBone Black update project that partitions eMMC into A/B OS slots, coordinates U-Boot health checks, and uses RAUC or Mender for rollback-safe remote updates.",
  "Field-safe BBB update lifecycle, bootloader rollback behavior, and remote fleet-management readiness.",
  {
    "C++17",
    "C++ Design Patterns",
    "SOLID",
    "BeagleBone Black",
    "A/B partition",
    "U-Boot",
    "RAUC/Mender",
    "eMMC",
    "Rollback"
  }
};

int main() {
  const RequiredEvidenceRule rule;
  assert(!profile.title.empty());
  assert(!profile.summary.empty());
  assert(rule.passes(profile.evidenceTarget));
  assert(profile.tags[0] == "C++17");
  return 0;
}
