﻿cmake_minimum_required (VERSION 3.8)


file(GLOB source_files
            "*.h"
            "*.cpp"
			"exceptions/*.cpp"
			"exceptions/*.h"
    )
add_library (LIB1 STATIC ${source_files})