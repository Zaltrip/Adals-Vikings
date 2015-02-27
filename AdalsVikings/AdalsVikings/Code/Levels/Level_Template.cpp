#include "Level_Template.h"
#include <iostream>

Level_Template::Level_Template(Player &player, ActionWheel &actionWheel)
	: Level(player, actionWheel)
{
	mBackgroundID = LevelFolder::Church_Outside;
}

void Level_Template::update(sf::Time &frametime)
{
	changeLevel();
	Level::update(frametime);
}

void Level_Template::render(IndexRenderer &iRenderer)
{
	Level::render(iRenderer);
}

void Level_Template::load()
{
	Level::load();
	mPlayer.setPosition(sf::Vector2f(410, 1070));
}

void Level_Template::unload()
{
	Level::unload();
}

void Level_Template::changeLevel()
{
}

void Level_Template::checkInteractEvents()
{

}
void Level_Template::checkEvents()
{

}