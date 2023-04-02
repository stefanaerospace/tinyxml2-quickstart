Step 1:
Install tinyxml2:
git submodule update --remote --recursive

Step 2:
Generate cmake build files:
-in the root of this project run:

cmake -G Ninja -S . -B build -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=~/tinyxml2-quickstart/tinyxml2

(Note if you get Error: could not load cache run cmake .)

Step 3:
Currently blocked due to cmake issues
https://github.com/leethomason/tinyxml2/issues/930
