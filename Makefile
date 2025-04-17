compile:
	@rm -f ./build/*

	@gcc \
		-Ofast -Wall -Wextra --no-standard-libraries -Wno-unused-parameter -Wno-switch\
		-o build/sim.exe \
		$(shell find ./src/c -name '*.c')
