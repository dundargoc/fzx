// The MIT License (MIT)
//
// Copyright (c) 2014 John Hawthorn
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#include "fzx/match/fzy.hpp"

#include <limits>

namespace fzx::fzy {

constexpr Score kScoreGapLeading = -0.005;
constexpr Score kScoreGapTrailing = -0.005;
constexpr Score kScoreGapInner = -0.01;
constexpr Score kScoreMatchConsecutive = 1.0;
constexpr Score kScoreMatchSlash = 0.9;
constexpr Score kScoreMatchWord = 0.8;
constexpr Score kScoreMatchCapital = 0.7;
constexpr Score kScoreMatchDot = 0.6;

constexpr Score kScoreMax = std::numeric_limits<Score>::infinity();
constexpr Score kScoreMin = -std::numeric_limits<Score>::infinity();

} // namespace fzx::fzy
