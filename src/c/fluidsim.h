#ifndef FLUIDSIM_H
#define FLUIDSIM_H

#define N 75
#define ITER 16
#define IX(x, y) (MAX(MIN(x, N - 1), 0) + (MAX(MIN(y, N - 1), 0) * N))

typedef struct FluidSim {
    F32 dt;
    F32 diff;
    F32 visc;

    F32 s[N * N];
    F32 density[N * N];
    F32 vx[N * N];
    F32 vy[N * N];
    F32 vx0[N * N];
    F32 vy0[N * N];
} FluidSim;

FluidSim *initFluid(F32 diffusion, F32 viscosity, F32 dt);
void stepFluid(void);

extern U8 FSCALE;
extern FluidSim fluid;

#endif /* FLUIDSIM_H */
