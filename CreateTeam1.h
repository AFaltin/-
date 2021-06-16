#pragma once
#include <string>
#include <list>
#include "Player.h"
#include "Scheme.h"
#include "Trainer.h"
#include "Team.h"
Team CreateTeam1(Team team, const Trainer& trainer, std::list<Player>& players);