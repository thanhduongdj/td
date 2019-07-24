//
// Copyright Aliaksei Levin (levlam@telegram.org), Arseny Smirnov (arseny30@gmail.com) 2014-2019
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
#pragma once

#include "td/utils/FileLog.h"

namespace td {
class TsFileLog {
 public:
  static Result<td::unique_ptr<LogInterface>> create(string path);
};
}  // namespace td