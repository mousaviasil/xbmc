/*
 *  Copyright (C) 2005-2018 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once

#include "gtest/gtest.h"

#include <memory>
#include <string>

class CSettings;

class TestBasicEnvironment : public testing::Environment
{
public:
  void SetUp() override;
  void TearDown() override;
private:
  void SetUpError();
  std::string m_tempPath;
  std::shared_ptr <CSettings> m_pSettings;
};
