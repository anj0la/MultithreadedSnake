<div align="center">
    <img src="MultithreadedSnake/graphics/logo_snake.png" alt="Screenshot of the logo" width="200">
</div>

# Multithreaded Snake Game

In Snake, the player controls a snake moving around the game board. Using the arrow keys, the objective is to navigate the snake to eat randomly spawning apples, which cause it to grow with each bite. As the snake grows longer, maneuvering becomes more challenging. The game ends if the snake's head collides with its own body or the board's edge. 

The game will remain in the **alpha** stage indefinitely, created as part of my parallel programming class. It marks my first attempt at developing a game in just two weeks, with no plans for beta testing.

## Game Screenshot

<img width="595" alt="snake_gameplay_screenshot" src="https://github.com/user-attachments/assets/dda50645-fc18-43d7-b908-4680df74d96a">

## Download the Game
Available via the following game page: https://anj0la.itch.io/multithreaded-snake-game

## Language & Libraries
- Made with C/C++
- Includes the Allegro 4.4.2 library (a game library for C/C++ programming utilizing DirectX and OpenGL)
- Includes the Pthreads library for Windows

## Multithreaded Aspects
- Spawning the apple in a random location
- Handling keyboard input
- Ending the game abruptly when the ESC key is pressed
- The main thread (includes the game loop in the play_game() method)

## Attribution
- Background music provided by Pixabay: https://pixabay.com/music/video-games-chiptune-grooving-142242/
- Apple crunch sound by Koops: https://freesound.org/s/20279/
- End game sound provided by Pixabay: https://pixabay.com/sound-effects/videogame-death-sound-43894/

## Known Bugs
- If you change to another screen, the music starts to repeat itself.
- Sometimes, the game will crash when trying to exit the game.
  
