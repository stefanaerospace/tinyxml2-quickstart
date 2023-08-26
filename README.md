Notes: this technique "vendors" tinyxml2 to your project. So no git submodules, additional builds, or downloads are needed. Cmake fetches the source and builds tinyxml2 automatically, it is in the generated _deps folder. Use "#include "tinyxml2.h" " to use tinyxml2 in your project.

Step 1:
Install tinyxml2:
git submodule update --remote --recursive

Step 2:
Generate cmake build files:
-in the root of this project run:

cmake -G Ninja -S . -B build -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=~/tinyxml2-quickstart/tinyxml2

(Note if you get "Error: could not load cache" run cmake .)

Step 3: make 

Step 4: ./xml
You should see "Example XML Text" now
