#ifndef CIRCLEGUNTURRET_HPP
#define CIRCLEGUNTURRET_HPP
#include "Turret.hpp"

class CircleGunTurret : public Turret {
public:
	static const int Price;
	CircleGunTurret(float x, float y);
	void CreateBullet() override;
};
#endif // CIRCLEGUNTURRET_HPP
