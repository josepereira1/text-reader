run: 
	gcc main.c text-reader.c -I text-reader.h -o execute
	./execute

cm: rm
	git add -A
	git commit -m "auto-commit"
	git push

rm: rm execute
