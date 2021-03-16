/*  test/unittests/test.cpp
 *
 *  Copyright (c) 2021 Mitya Selivanov
 *
 *  This file is part of the cxx-project.
 *
 *  Laplace is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty
 *  of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See
 *  the MIT License for more details.
 */

#include "../../cxx-project/core/core.h"
#include <gtest/gtest.h>

namespace yetanotherproject {
  TEST(cxx_project, some_test) {
    
    EXPECT_EQ(get_value(), 42);
  }
}
