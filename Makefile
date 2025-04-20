compile:
	@rm -f ./build/*

	@clang \
		-O3 -Wall -Wextra --target=wasm32 --no-standard-libraries -Wno-unused-parameter -Wno-switch\
		-Wl,--no-entry -Wl,--export-dynamic \
		-o build/sim.wasm \
		$(shell find ./src/c -name '*.c')
