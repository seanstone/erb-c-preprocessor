all: build/test
	$<

build/%: build/%.c
	mkdir -p build
	gcc $< -o $@

.SECONDARY:
build/%.c: %.erb.c
	mkdir -p build
	erubis -p '@ @' $< > $@

.PHONY: clean
clean:
	rm -rf build
