#pragma once

#include "Graphics/Post/PostEffect.h"

class BloomEffect : public PostEffect
{
public:
	void Init(unsigned width, unsigned height) override;

	void ApplyEffect(PostEffect* buffer) override;

	float Getdownscale() const;
	float Getthreshold() const;
	unsigned Getpassthrough() const;

	void Setdownscale(float downscale);
	void Setthreshold(float threshold);
	void Setpassthrough(unsigned passthrough);

private:
	float m_downscale = 5.0f;
	float m_threshold = 0.05f;
	unsigned m_passthrough = 10;
	glm::vec2 direction;
};