# Elementum

## A falling sand game written in C and powered by WebAssembly

Play it [here](https://www.mechanikadesign.com/games/elementum/).

## Background

### What is Elementum?

Elementum is a falling-sand simulator your that can be played in your browser. It features heat simulation, electricity, density, chemical reactions, and more. Currently, it contains around 50
unique elements to play with.

### Mechanics

Elementum makes use of two intersecting systems: a cellular-automaton and a fluid simulation. Elements are portrayed as pixels, or "cells", on a grid. Each cell interacts with its direct neighbors based on their types and produces unique behavior. Fire will set flammable material like wood ablaze. Hot cells will evaporate water, creating steam that rises to the top of the canvas, only to later rain down again. Supplementary to the cellular-automaton, a fluid simulation approximates wind and allows temperature changes to propagate.

## Keyboard Controls

The game can be played using the following keyboard shortcuts:

### Tools
- `D` - Draw tool
- `E` - Erase tool
- `L` - Line tool
- `W` - Wind tool

### Game Controls
- `Space` - Pause/Resume simulation
- `T` - Step simulation (advance one frame)
- `R` - Reset simulation
- `C` - Open resize menu
- `S` - Save current state (.elem file)
- `O` - Load saved state (.elem file)

### Scene Selection
- `1` through `5` - Change to different scenes

### Tool Strength
- Mouse wheel up/down - Adjust tool strength (area of effect)

## Building

Required dependencies:
- clang
- uglifyjs

To build the project, run the following commands:

```bash
git clone https://github.com/warrengalyen/Elementum
```

```bash
cd Elementum
```

```bash
make
```
