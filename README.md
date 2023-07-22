# Poly Shooter
This is a simple 2D game replicating the good 'ol games of the late 70's and early 80's. You--as a spaceship--are tasked with killing the swarm of enemies that are ambushing you. Waves and waves of them. You have to use your trusty weapon to destroy the oncoming waves. Be sure to be quick and flexible, as you can get hit by an incoming enemy. If you get hit 3 times... well you die. You don't want to die, don't you? No one does. You'll never see your family. You'll never see your friends. You'll never do the things you wanted to do. You'll die as a failure.  No one will remember you. You'll die as a nobody... anyways, have fun with the game. 

And remember... don't die.

## Controls
To control the spaceship, use the A and D keys or the LEFT and RIGHT arrow keys. And to shoot and kill those pesky enemies use the SPACE bar. You can also pause the game with the P key.

# Build
The project uses cmake as the build system. You would have to install it and configure it before doing anything.

## Linux:
For linux, you can do:

`
git clone --recursive https://github.com/MohamedAG2002/PolyShooter.git
cd PolyShooter
mkdir build
cmake -B build
`

After that you can use your favorite IDE to traverse the project and even build it from source if you want.

## Windows
For windows, things are a little bit different. You need to download the binaries for SDL2, SDL2_image, SDL2_ttf, and SDL2_mixer. You can go to the github page for each one, go to the release section, and download the binaries for windows x64. Then, you can do: 

`
git clone --recursive https://github.com/MohamedAG2002/PolyShooter.git
cd PolyShooter
mkdir build
cmake -B build
`
After that, you have to delete all of the libraries in the **lib** folder which is in the **external** folder and replace them with the libraries you download from all of the above dependencies. You would also have to take the dlls you downloaded(which should be in the **bin** folder for each of the dependencies you downloaded) and put them in the **build** folder which you created. Once you've done all of that, you can just build the project with `cmake --build build` which will have to be run in the project directory, not in the **build** folder.

# Play
If you just want to play the game and not worry about buildin the project and all of that, just go to the itch.io link below and download either the linux build or the windows build(yeah, no mac build. Sorry), whichever you would like.

itch: https://mohamedag.itch.io/poly-shooter
