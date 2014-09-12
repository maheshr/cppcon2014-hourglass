#ifndef __TEAM_H__
#define __TEAM_H__

#include "team_api.h"

// client wrapper
#include <string>
class Team {
    public:
        Team(std::string name) {
            opaque_ = team_construct(name.c_str());
        }

        ~Team() {
            team_destruct(opaque_);
        }

        void add(std::string name) {
            team_add(opaque_, name.c_str());
        }

        int count() {
            return team_count(opaque_);
        }
    private:
        team_t opaque_;
};

#endif
