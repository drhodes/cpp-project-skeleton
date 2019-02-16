
check-conan:
	@conan -v || (echo "hmm, is conan installed and on your PATH?")


from-scratch: clean check-conan
	mkdir build
	cd build && \
	conan install .. && \
	cmake .. && \
	make

	@echo "--------------------------------\n"
	@echo "Now the app should be built and ready to run like:\n"
	@echo "  ./build/bin/appexe"

test:
	@echo running the tests

clean:
	./clean.sh

FORCE:
