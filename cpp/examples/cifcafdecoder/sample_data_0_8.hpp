#ifndef SAMPLE_DATA_HPP
#define SAMPLE_DATA_HPP

#include <vector>

constexpr int inputWidth = 840;
constexpr int inputHeight = 605;
constexpr int featureWidth = 107;
constexpr int featureHeight = 77;
constexpr int featureSize = featureWidth * featureHeight;
extern const std::vector<float> pif, paf;

#endif // SAMPLE_DATA_HPP
