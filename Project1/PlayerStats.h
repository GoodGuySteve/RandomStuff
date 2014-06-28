#pragma once

//Holds current player stats and state.
class PlayerStats {
public:
	PlayerStats();
	virtual ~PlayerStats();

	//const getters
	bool isOnGCD() const;

	//setters
	void setGCDActive();

private:
	//TODO add raw stats and state(make separate classes for gear stats and talents)
	bool gcdActive;
};

