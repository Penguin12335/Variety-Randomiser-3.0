#pragma once
#include "Memory.h"
#include <memory>

class ChallengeRandomizer {
public:
	ChallengeRandomizer(const std::shared_ptr<Memory>& memory, int seed);

private:
	void HandleSigScans(int i, const std::vector<byte>& data);

	void AdjustRng(int offset);
	std::shared_ptr<Memory> _memory;

	int RNG_ADDR;
	int RNG2_ADDR;
};