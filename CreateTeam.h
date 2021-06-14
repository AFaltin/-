#pragma once
#include <string>
#include <list>
#include "Player.h"
#include "Scheme.h"
#include "Trainer.h"
#include "Team.h"
std::list <Player>CreateTeam(Team team, Scheme scheme, Trainer trainer, std::list <Player> players);