/**
 * Copyright 2017 RameshRavone. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 **/

#ifndef UTILS_H
#define UTILS_H

#include "dictionary.h"

#include "gd_macros.h"

#include "gd_config.h"
#include "os/file_access.h"
#include "print_string.h"

#include "core/variant.h"

#if GD_FIREBASE_ANDROID_IOS
#include "jnihelper.h"
#endif

NS_GODOT_BEGINE

class Utils {
public:
	Utils() {}
	virtual ~Utils() {}

	static Error open_file(const String p_filepath, String &p_dest);
	static Error parse_file_dict(const String p_filepath, Dictionary &p_dest);

    static Variant get_val(Dictionary p_dict, String p_key, String p_def_val);
	static void call_scritp_func(String p_from, String p_key, Variant p_value);

    static String bytearray_to_string(const ByteArray &p_data);

	inline static void set_script_id(int p_script_id) { _script_id = p_script_id; }

private:
	static int _script_id;
};

NS_GODOT_END

#endif // UTILS_H
