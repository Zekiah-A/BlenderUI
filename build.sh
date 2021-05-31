#!/bin/bash
echo "Building files"
#gcc main.cpp main.hpp rect.cpp rect.hpp -o blender_ui -lGL -lGLU -lglut # doesn't work with gcc, wtf
if  g++ main.cpp main.hpp rect.cpp rect.hpp -o blender_ui -lGL -lGLU -lglut; then # turn up verbosity
    echo "Project sucessful built as 'blender_ui', running."
else
    echo "Build failed."
fi
chmod +x blender_ui
./blender_ui