#!/bin/bash
echo "Building files"
#gcc Main.cpp -o blender_ui -lGL -lGLU -lglut
if  gcc main.cpp main.hpp rect.cpp rect.hpp -o blender_ui -lGL -lGLU -lglut -lX11; then
    echo "Project sucessful built as 'blender_ui', running."
else
    echo "Build failed."
fi
chmod +x blender_ui
./blender_ui