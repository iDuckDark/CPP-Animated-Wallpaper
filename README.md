# C++ Animated Wallpaper with SDL 2.0.9

<!-- ![Demo CountPages alpha](https://github.com/iDuckDark/CPP-Animated-Wallpaper/blob/master/wallpaper.gif) -->

<p align="center">
  
<img src="https://github.com/iDuckDark/CPP-Animated-Wallpaper/blob/master/wallpaper.gif" width="600" height="400" />

</p>


#How to compile the project on MacOS?

1. Download SDL using ```brew install sdl2```
2. Launch XCode
3. Go to project's target -> build settings -> search for ```Header Search Path```
4. Add ```/usr/local/include``` to ```Header Search Path```
5. Now navigate to build phases, ```Link Binary with Libraries```
6. Add ```libSDL2-2.0.0.dylib``` by browsing the ```/Usr/local/Cellar/SDL2/2.0.9/lib``` directory. You also could use ```command + shift + g``` to navigate to the folder quickly
7. Finally, build & run the project
