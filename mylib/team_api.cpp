#include "team_api.h"

#include <string>
#include <vector>

// internal C++ implementation of TeamImpl class
class TeamImpl {
public:
  TeamImpl(const std::string &name);
  ~TeamImpl();
  void add(const std::string &name);
  int count();

private:
  std::string name_;
  std::vector<std::string> team_;
};

TeamImpl::TeamImpl(const std::string &name) : name_(name) {}

TeamImpl::~TeamImpl() {}

void TeamImpl::add(const std::string &name) { team_.emplace_back(name); }

int TeamImpl::count() { return team_.size(); }

// implementation of C interface
extern "C" {
struct team {
  template <typename... Args>
  team(Args &&... args)
      : actual_(std::forward<Args>(args)...) {}
  TeamImpl actual_;
};

team_t team_construct(const char *name) { return new team(name); }

void team_destruct(team_t obj) { delete obj; }

void team_add(team_t obj, const char *name) { obj->actual_.add(name); }

int team_count(team_t obj) { return obj->actual_.count(); }
}
