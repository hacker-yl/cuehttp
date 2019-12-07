/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements. See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership. The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied. See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef CUEHTTP_SEND_HPP_
#define CUEHTTP_SEND_HPP_

#include "cuehttp/detail/send.hpp"

namespace cue {
namespace http {

template <typename... Args>
inline static void send_file(Args&&... args) {
    detail::send_file(std::forward<Args>(args)...);
}

} // namespace http
} // namespace cue

#endif // CUEHTTP_SEND_HPP_
