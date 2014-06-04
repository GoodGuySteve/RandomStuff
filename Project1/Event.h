#pragma once
class Event{
public:
	Event();
	virtual ~Event();

	bool operator>(const Event&);
	bool operator<(const Event&);
	bool operator>=(const Event&);
	bool operator<=(const Event&);
private:
	double timeTriggeredAt;
};

