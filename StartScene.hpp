#ifndef STARTSCENE_HPP
#define STARTSCENE_HPP
#include "IScene.hpp"

class StartScene final : public Engine::IScene {
public:
	explicit StartScene() = default;
	void Initialize() override;
	void BackOnClick(int stage);
};

#endif // STARTSCENE_HPP
