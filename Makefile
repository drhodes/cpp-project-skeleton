
check-conan:
	@conan -v || (echo "hmm, is conan installed and on your PATH?")


from-scratch: clean check-conan
	mkdir build
	cd build && \
	conan install .. && \
	cmake .. && \
	make

	@echo "--------------------------------\n"
	@echo "Now the app should be built and ready to run like:"
	@echo "  ./build/bin/appexe\n"	
	@echo "the tests should be built and ready to run like:"
	@echo "  ./build/bin/apptest"

test:
	@echo running the tests

clean:
	./clean.sh

FORCE:
