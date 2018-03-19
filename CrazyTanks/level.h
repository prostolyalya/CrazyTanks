#pragma once
#include "renderSystem.h"
#include "direction.h"

const int kLevelRows = kScreenRows;
const int kLevelColumns = 70;

const unsigned char	CellSymbol_Player1 = '1';

const unsigned char	CellSymbol_Tank = 'T';
const unsigned char	CellSymbol_BrickWall = '#';
const unsigned char	CellSymbol_SteelWall = '@';
const unsigned char	CellSymbol_EnemySpawner = 'S';

const unsigned char kLevelData0[kLevelRows][kLevelColumns + 1] =
{
	"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
	"@ S                                                                  @",
	"@                                                                    @",
	"@                                                                    @",
	"@                                                                    @",
	"@                                                                    @",
	"@                                                                    @",
	"@                                                                    @",
	"@                                                                    @",
	"@                                                                    @",
	"@                                                                    @",
	"@                                                                    @",
	"@                                                                    @",
	"@                                                                    @",
	"@                                                                    @",
	"@                                                                    @",
	"@                                                                    @",
	"@                                                                    @",
	"@                                                                    @",
	"@                                         #       #                  @",
	"@                                         #       #                  @",
	"@                                         #  1    #                  @",
	"@                                         #       #                  @",
	"@                                         #       #                  @",
	"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
};

const unsigned char	kBrickWallImage = 177;
const ConsoleColor kBrickWallSymbolColor = ConsoleColor_DarkYellow;
const ConsoleColor kBrickWallBackgroundColor = ConsoleColor_Red;

const unsigned char	kSteelWallImage = 254;
const ConsoleColor kSteelWallSymbolColor = ConsoleColor_Gray;
const ConsoleColor kSteelWallBackgroundColor = ConsoleColor_DarkGray;


/////////////////////////////////////
// Tanks data
const float kTankFireCooldownTime = 0.5;
const int kTankSize = 3;

enum TankColor
{
	TankColor_0,
	TankColor_1,
	TankColor_2
};

struct TankImageCell
{
	unsigned char symbol;
	TankColor symbolColor;
	TankColor backgroundColor;
};

const TankImageCell kTankImage[Direction_MAX][kTankSize][kTankSize] =
{
	// Left
	{
		{ { 220, TankColor_1, TankColor_0 },{ 220, TankColor_1, TankColor_0 },{ 220, TankColor_1, TankColor_0 } },
		{ { 196, TankColor_2, TankColor_0 },{ 4, TankColor_2, TankColor_1 },{ 221, TankColor_1, TankColor_0 } },
		{ { 223, TankColor_1, TankColor_0 },{ 223, TankColor_1, TankColor_0 },{ 223, TankColor_1, TankColor_0 } }
	},
	// Up
	{
		{ { 220, TankColor_1, TankColor_0 },{ 179, TankColor_2, TankColor_0 },{ 220, TankColor_1, TankColor_0 } },
		{ { 219, TankColor_1, TankColor_1 },{ 4, TankColor_2, TankColor_1 },{ 219, TankColor_1, TankColor_1 } },
		{ { 223, TankColor_1, TankColor_0 },{ 0, TankColor_0, TankColor_0 },{ 223, TankColor_1, TankColor_0 } }
	},
	//Right
	{
		{ { 220, TankColor_1, TankColor_0 },{ 220, TankColor_1, TankColor_0 },{ 220, TankColor_1, TankColor_0 } },
		{ { 222, TankColor_1, TankColor_0 },{ 4, TankColor_2, TankColor_1 },{ 196, TankColor_2, TankColor_0 } },
		{ { 223, TankColor_1, TankColor_0 },{ 223, TankColor_1, TankColor_0 },{ 223, TankColor_1, TankColor_0 } }
	},
	// Down
	{
		{ { 220, TankColor_1, TankColor_0 },{ 0, TankColor_0, TankColor_0 },{ 220, TankColor_1, TankColor_0 } },
		{ { 219, TankColor_1, TankColor_1 },{ 4, TankColor_2, TankColor_1 },{ 219, TankColor_1, TankColor_1 } },
		{ { 223, TankColor_1, TankColor_0 },{ 179, TankColor_2, TankColor_0 },{ 223, TankColor_1, TankColor_0 } }
	}
};


/////////////////////////////////////
// Player data
const int kPlayerHealth = 3;
const int kPlayerSpeed = 10;


/////////////////////////////////////
// Enemy data
const int kEnemiesPerLevel = 15;
const int kEnemiesPerLevelInOneMoment = 6;
const int kEnemyHealth = 1;
const int kEnemySpeed = 5;
const float kEnemySpawnerSpawnTime = 1;
const float kEnemyAIAnalizeTime = 0.5;

const ConsoleColor bc0 = ConsoleColor_Black;
const ConsoleColor bc1 = ConsoleColor_Gray;
const ConsoleColor bc2 = ConsoleColor_Red;
const ConsoleColor bc3 = ConsoleColor_DarkRed;


/////////////////////////////////////
// Bullet data
const float kBulletSpeed = 30.0;
const char kBulletImage = '*';
