.PHONY: clean All

All:
	@echo "----------Building project:[ Structure1_Excersice1 - Debug ]----------"
	@cd "Structure1_Excersice1" && "$(MAKE)" -f  "Structure1_Excersice1.mk"
clean:
	@echo "----------Cleaning project:[ Structure1_Excersice1 - Debug ]----------"
	@cd "Structure1_Excersice1" && "$(MAKE)" -f  "Structure1_Excersice1.mk" clean
