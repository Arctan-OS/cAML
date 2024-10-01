PRODUCT := ./cAML

$(PRODUCT):
	gcc $(shell find src/ test/ -type f -name "*.c") -Itest/src/include -Isrc/include -o cAML

.PHONY: test
test: $(PRODUCT)
	$(MAKE) -C test/cases/asl
	$(MAKE) -C test/cases/tables
	$(PRODUCT)

.PHONY: clean
clean:
	rm -f $(PRODUCT)
