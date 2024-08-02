I think the game is gonna be some sort of The Binding of Isaac for terminal.
(A top-down shooter)

# To Do
- [ ] Create the main game update loop.
    - [ ] Calculate the DeltaTime between each frame
    - [ ] Limit the game to 60 FPS.
- [ ] Display the data to the terminal
    - [ ] Create a double screen buffer (prevent terminal from blinking between each frame)
    - [ ] Make the game adapt to the size of the terminal (static size, borders filled with some color)
    - [ ] Create a way of adding shapes to the screen and drawing the easily.
- [ ] Create the input system
    - [ ] Make some sort of manager that allows for listening to a certain key press
    - [ ] Make it possible to press a key for a long period of time?
- [ ] Entities
    - [ ] Object pool for entities such as enemies, so that we don't have to reallocate
          that part of the memory over and over again?
- [ ] Player
    - [ ] Player movement; Top-down shooter
    - [ ] Being able to shoot projectiles (one bullet at a time in the screen)
- [ ] Collision manager
    - [ ] Be able to detect collision between 2 entities, such as an enemy and a bullet.

