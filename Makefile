PRODUCT := ./cAML

$(PRODUCT):
	gcc src/main.c -o cAML

test: $(PRODUCT)
	$(PRODUCT) -test
