#ifndef SETTING_HPP
#define SETTING_HPP
#include <allegro5/allegro_audio.h>
#include <memory>
#include "IScene.hpp"

class setting final : public Engine::IScene {
private:
	std::shared_ptr<ALLEGRO_SAMPLE_INSTANCE> bgmInstance;
public:
	explicit setting() = default;
	void Initialize() override;
	void Terminate() override;
	void BackOnClick(int stage);
	void BGMSlideOnValueChanged(float value);
	void SFXSlideOnValueChanged(float value);
};

#endif // SETTING_HPP#pragma once
