# README
1. First Run the command (check your MSVC install path first):
"C:\Program Files (x86)\Microsoft Visual Studio\2017\Professional\VC\Auxiliary\Build\vcvarsall.bat" x64
2. Inside src folder run :
cmake -DCMAKE_CONFIGURATION_TYPES="Debug;Release" -DCMAKE_GENERATOR_PLATFORM=x64 -G "Visual Studio 15 2017" -B .\bin\target
3. Inside test folder run :
cmake -DCMAKE_CONFIGURATION_TYPES="Debug;Release" -DCMAKE_GENERATOR_PLATFORM=x64 -G "Visual Studio 15 2017" -B .\bin\test