#!/bin/bash
echo "Building files"
#gcc main.cpp main.hpp rect.cpp rect.hpp -o blender_ui -lGL -lGLU -lglut # doesn't work with gcc 
if  g++ main.cpp main.hpp rect.cpp rect.hpp checkbox.cpp checkbox.hpp -o blender_ui button.cpp button.hpp -lGL -lGLU -lglut; then # turn up verbosity
    echo -e "\e[1;32mExample project sucessfuly built as 'blender_ui', running. \e[0m"
else
    echo -e "\e[1;31mBuild failed. \e[0m"
fi
chmod +x blender_ui
./blender_ui